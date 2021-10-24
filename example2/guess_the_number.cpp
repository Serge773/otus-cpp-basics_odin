#include "add_the_entry.h"
#include "check_value.h"
#include "generate_number.h"
#include "print_the_list.h"


#include <iostream>
#include <string>

const int max_value_devider = 100;
bool not_win = true;
int user_input; 
std::string user_name;
int number_of_guess = 0;

int main ()
{
    int max_value = calculate_the_number(max_value_devider);// генерируем число, для угадывания
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

    return 0;
}