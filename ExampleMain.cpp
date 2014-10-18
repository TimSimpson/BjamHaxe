#include <stdio.h>
#include <iostream>
#include <hxcpp.h>
#include <Turtle.h>

extern "C" int main(int argc, char *argv[])
{
    HX_TOP_OF_STACK \
    hx::Boot(); \
    __boot_all();
    ::Turtle_obj::main();
}
