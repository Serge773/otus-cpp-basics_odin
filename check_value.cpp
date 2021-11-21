#include "check_value.h"

#include <iostream>
int atteration = 0;

int is_correct_answer(bool& not_win, int input_value, int correct_answer)
{
    atteration++;
    if (input_value > correct_answer) {
		std::cout << "less than " << input_value << std::endl;
	}
	else if (input_value < correct_answer) {
		std::cout << "greater than " << input_value << std::endl;
    }
	else {
		std::cout << "you win!" << std::endl;
		not_win = false;
	}
    return atteration;
}

