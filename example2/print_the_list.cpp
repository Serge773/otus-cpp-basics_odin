#include "print_the_list.h"

#include <iostream>
#include <fstream>
#include <string>

std::string players_name;
int score;

void print_the_palyerList()
{
    std::ifstream file_in("../high_scores.txt");
    if(file_in.is_open())
    {
        std::cout << std::endl << "THE TABLE OF HIGH SCORES" << std::endl;
        while (true) {
			file_in >> players_name;
			file_in >> score;
			file_in.ignore();

			if (file_in.fail()) {
				break;
		    }
            
            std::cout << players_name << '\t' << score << std::endl;
        }
    }
    else
    {
        std::cout << "Failed to open file for read: high_scores.txt !" << std::endl;
    }

    file_in.close();
}