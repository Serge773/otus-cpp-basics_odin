#include "add_the_entry.h"
#include "error_check.h"
#include "check_value.h"
#include "generate_number.h"
#include "print_the_list.h"


#include <iostream>
#include <string>

int max_value_devider = 100;
bool not_win = true;
int user_input; 
std::string user_name;
int number_of_guess = 0;
bool normal_gameflow = true;

int main (int argc, char** argv)
{  
        
    if(argc >= 2)
    {
        normal_gameflow =  false;
       if(contains_incompatible_values( argc, argv))// Проверяем на наличие несовместимых параметров
       {
           std::cerr << "The command line argument contains incompatible entries -max and -level" << std::endl;
           return 0;
       }
       std::string arg_value{ argv[1] };

       if (arg_value == "-max")
       {
            max_value_devider = std::stoi(argv[2]); 
            normal_gameflow = true;
       }

       if (arg_value == "-level")
       {
           int commandline_value = std::stoi(argv[2]); 
           switch(commandline_value)
           {
                case 1 : max_value_devider = 9;
                case 2 : max_value_devider = 49;
                case 3 : max_value_devider = 99;
                defaul : max_value_devider = 100;
           }
           normal_gameflow = true;     
       }

       if (arg_value == "-table")
       {
           print_the_palyerList();
       }

    } 


    if (normal_gameflow)
    {
        int max_value = calculate_the_number(max_value_devider);// генерируем число, для угадывания 
        std::cout << max_value <<std::endl;
        std::cout << "Enter your name: ";
        std::cin >> user_name;
        while(not_win)
        {
            std::cout << "Enter your guess: ";
            std::cin >> user_input;
            number_of_guess = is_correct_answer(not_win, user_input, max_value);//угадываем число и возвращаем количество попыток
        }
    
        add_the_last_entry(user_name, number_of_guess);//добавляем последнего пользователя и количество попыток в таблицу
        print_the_palyerList();//печатаем таблицу игроков
    }
    

    return 0;
}