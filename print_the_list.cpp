#include "print_the_list.h"

#include <iostream>
#include <fstream>
#include <map>
#include <string>

std::string players_name;
int score;
std::map<std::string, int> the_Players_list;

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

            the_Players_list[players_name] = score;

			if (file_in.fail()) {
				break;
		    }

        }
    }
    else
    {
        std::cout << "Failed to open file for read: high_scores.txt !" << std::endl;
    }

    file_in.close();

    for(std::map<std::string, int> :: iterator it= the_Players_list.begin(); it != the_Players_list.end(); it++)
    {
        std::cout << it->first << " \t" << it->second << std::endl;
    }
}