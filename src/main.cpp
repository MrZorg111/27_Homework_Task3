#include <iostream>
#include "Boss.h"

int main() {
	setlocale(LC_ALL, "rus");
	int team, num_workers, boss_command;
	Boss* boss = new Boss();
	
	//Блок ввода настроек команд и работников

	std::cout << "Введите количество команд: " << std::endl;					
	std::cin >> team;
	boss->setNumTeam(team);
	std::cout << "Введите количество работников: " << std::endl;
	std::cin >> num_workers;
	boss-> setNumWorkers(num_workers);

	//Создание иерархии команд и работников
	boss->setListsTeam();

	//Блок передачи поручений подчиненным
	for (int b_c = 0; b_c < team; b_c++) {
		std::cout << "Уважаемый босс, какие будут указания? " << std::endl;
		std::cin >> boss_command;
		
		if (!boss->setBossCommand(boss_command, b_c)) {
			do {
				std::cout << "Дайте еще одно задание: " << std::endl;
				std::cin >> boss_command;
			} while (!boss->setBossCommand(boss_command, b_c));
		}
	}


	//Блок вывода результатов распределения труда
	std::cout << "Уважаемый " << boss->getNameBoss() << ", желаете ли проинспектировать выполнение ваших поручений ? (y / n)" << std::endl;
	char answer;
	std::cin >> answer;
	if (answer == 'y') {
		boss->getListsTeam();
	}
	else {
		std::cout << "Ваша вера в подчиненых достойна уважения, но может стоит их всеже проверить в другой раз? " << std::endl;
	}


	//Заметание следов
	delete boss;
	return 0;
}