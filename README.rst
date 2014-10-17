Haxe with Bjam
==============

This is an attempt to better understand how Haxe's C++ target works by using
Bjam to compile Haxe generated code.

* First, run haxe to create C++ code:

    haxe -cpp target -debug -D HXCPP_M64 -D no-compilation -main Turtle

* Next, run bjam:

    bjam -d+2 -q link=static

TODOS:
    * Make not terrible.
    * Fix things to work with link=shared


