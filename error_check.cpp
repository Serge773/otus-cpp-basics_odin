#include "error_check.h"

#include <iostream>
#include <string>

bool contains_incompatible_values(int argc, char** argv)
{
    std::string max_option;
    std::string level_option;
    bool incompatible = false;
    for (int i = 0; i < argc; i++)
    {
        std::string arg_value{ argv[i] };
        if(arg_value == "-max")
            max_option = arg_value;

        if (arg_value == "-level")
            level_option = arg_value;
        
    }

    if(max_option == "-max" && level_option == "-level")
        incompatible = true;

    return incompatible;
}