#include "generate_number.h"

#include <iostream>
#include <cstdlib>
#include <ctime>


int calculate_the_number(int devider)
{
    std::srand(std::time(nullptr));
    const int random_value = std::rand() % devider;

    return random_value;
}
