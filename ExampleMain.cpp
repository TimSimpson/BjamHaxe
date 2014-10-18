#include <stdio.h>
#include <iostream>
#include <hxcpp.h>
#include <Turtle.h>
#include <algorithm>
#include <vector>


bool TurtleOver25(Turtle t) {
    return t->getSpots() > 25;
}

extern "C" int main(int argc, char *argv[])
{
    HX_TOP_OF_STACK \
    hx::Boot(); \
    __boot_all();
    ::Turtle_obj::main();


    std::cout << "This next part uses the Haxe objects from C++\n" << std::endl;

    Turtle t = Turtle_obj::__new(HX_CSTRING("Timmy"), (int)4);

    std::cout << "The turtle's name is " << t->getName() << ".\n";

    std::cout << "Vector time.\n";

    std::vector<Turtle> turtles;
    for (int index = 0; index < 50; ++ index) {
        turtles.push_back(Turtle_obj::__new(HX_CSTRING("Veccy"), index));
    }

    const int c = std::count_if(turtles.begin(), turtles.end(), TurtleOver25);
    std::cout << "There are " << c << " turtles with over 25 spots.\n";

}
