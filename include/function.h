#pragma once
#include <iostream>
#include <ctime>
//Генератор заданий

char gen_rand_task() {
	std::srand(time(nullptr));

	switch (rand() % 3 + 1) {
		case 1: 
			return 'A';
		case 2:
			return 'B';
		case 3:
			return 'C';
		default:
			std::cout << "Неверный ввод!" << std::endl;
	}
}