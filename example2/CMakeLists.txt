cmake_minimum_required(VERSION 3.5)

project(03.homework)

add_executable(
	guess_the_number
	guess_the_number.cpp
	add_the_entry.cpp
	add_the_entry.h
	check_value.cpp
	check_value.h
	generate_number.cpp
	generate_number.h
	print_the_list.cpp
	print_the_list.h
)

set_target_properties(
	guess_the_number PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)