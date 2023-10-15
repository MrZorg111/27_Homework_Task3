cmake_minimum_required(VERSION 3.17)

add_executable("27_Homework_Task3" main.cpp function.cpp ${MY_INCLUDE_DIR} ${MY_CLASS_DIR} )
target_include_directories("27_Homework_Task3" PUBLIC ${MY_INCLUDE_DIR} ${MY_CLASS_DIR})