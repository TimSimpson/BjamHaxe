#include <hxcpp.h>
#include <hxMath.h>
#include <stdio.h>

#ifndef INCLUDED_Turtle
#include <Turtle.h>
#endif

#include <iostream>

#include <io.h>
#include <windows.h>

void main() {
    std::cerr << "HI!\n" << std::endl;
// //    hx::Boot();

//     //__hxcpp_enable(false);
//    #ifdef HX_WINRT
//    HRESULT hr = ::RoInitialize(  RO_INIT_MULTITHREADED );
//    #endif

//     #ifdef GPH
//      setvbuf( stdout , 0 , _IONBF , 0 );
//      setvbuf( stderr , 0 , _IONBF , 0 );
//     #endif


//       #if defined(HX_WINDOWS) && !defined(HX_WINRT)
//    AttachConsole(ATTACH_PARENT_PROCESS);
//    if (GetConsoleWindow() != NULL)
//    {
//       if (_fileno(stdout) < 0 || _get_osfhandle(fileno(stdout)) < 0)
//          freopen("CONOUT$", "w", stdout);
//       if (_fileno(stderr) < 0 || _get_osfhandle(fileno(stderr)) < 0)
//          freopen("CONOUT$", "w", stderr);
//       if (_fileno(stdin) < 0 || _get_osfhandle(fileno(stdin)) < 0)
//          freopen("CONIN$", "r", stdin);
//    }
//    #endif
// setbuf(stdin, 0);
//    setbuf(stdout, 0);
//    setbuf(stderr, 0);


//    //__hxcpp_stdlibs_boot();
//      std::cerr << "HI! 1\n" << std::endl;
//    hx::Object::__boot();
//    std::cerr << "HI! 2\n" << std::endl;
//     Dynamic::__boot();
//     Class_obj::__boot();
//     std::cerr << "HI! 3\n" << std::endl;
//     String::__boot();
//     hx::Anon_obj::__boot();
//     hx::ArrayBase::__boot();
//     std::cerr << "HI! 4\n" << std::endl;
//     hx::EnumBase_obj::__boot();
//    Math_obj::__boot();

    hx::Boot();
    ::Turtle_obj::main();
}


