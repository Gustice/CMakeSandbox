#include <iostream>

#include "Config.h"
#include "statLib.hpp"
#include "sharedLib.hpp"
#include "interfaceImplLib.hpp"

const char * myString = ProjectDefined_String;
const int myNumber = ProjectDefined_Number;

int main(int argc, char const *argv[])
{
    std::cout << "########################\n";
    std::cout << "  Hello BasicProject ...\n";
    std::cout << "########################\n";
#ifdef USE_FLAG
    std::cout << "NOTE: USE_FLAG was also defined: " << std::endl;
#endif
    std::cout << "Project-Version is: " << Project_Version_MAJOR << "." << Project_Version_MINOR << "\n ";
    std::cout << "Description: " << myString << " " << myNumber << "\n "<< std::endl;

    std::cout << ("## Static Library is used \n");
    Lib_Helper();

    std::cout << ("## Shared-Library is used \n");
    Shr_InitCore();

    std::cout << ("## Interface implementation is used \n");
    IntImpl inst;
    inst.doSome();

    return 0;
}

