Haxe with Bjam
==============

This is an attempt to better understand how Haxe's C++ target works by using
Bjam (or more correctly, Boost Build) to compile Haxe generated code.

The bulk of the work here is figuring out how to compile the hxcpp runtime as
its own library independently of the Haxe generated C++ code created for this
project. This gets tricky in Windows thanks to the always exciting and
wonderful __declspec(dllimport/export) keywords that have to be lined up
perfectly.

I can't seem to make hxcpp compile correctly as a shared library unless I
modify it. The problem appears to be two functions that are not marked to be
exported as a DLL, including "hx/Boot.h"'s void Boot().

If I include it as part of the local executable, it requires access to dozens
of functions and classes defined in hxcpp which seem intentionally not marked
for export. I do not yet understand hxcpp well enough to know it is absolutely
required to call the Boot() function when using Haxe generated C++ code but it
seems likely- attempts I made to use code without calling Boot() ended with
crashes.

So, here are the steps:

* Open up Boot.h (probably located in
  C:\\HaxeToolkit\\haxe\\lib\\hxcpp\\<version>\\include\\hx\\Boot.h) and add
  "HXCPP_EXTERN_CLASS_ATTRIBUTES " right before "void Boot();"

* Open up hx\\StdLibs.h and add the same macro before
  "int __hxcpp_irand(int inMax);""

* Next, run haxe to create C++ code in this directory:

    haxe -cpp target -debug -D HXCPP_M64 -D no-compilation -main Turtle

* Next, run bjam:

    bjam -d+2 -q link=static

  or

    bjam -d+2 -q link=shared

.. code-block:: dog

   (I HAVE NO IDEA WHAT I AM DOING)
               /
        ^. .^ ()
        / -'-()   <- Dog scientist
      \|__`-[U]
       /   \
