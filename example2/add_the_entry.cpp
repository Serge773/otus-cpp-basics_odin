#include "add_the_entry.h"

#include <iostream>
#include <fstream>
#include <string>

void add_the_last_entry(std::string name, int score)
{
    std::ofstream out_file("../high_scores.txt", std::ios::app);
    if (out_file.is_open()) {
		out_file << name << ' ';
		out_file << score;
		out_file << std::endl;
    }
    else
    {
        std::cout << "Failed to open file for write: high_scores.txt!" << std::endl;
    }
    
    out_file.close();
}