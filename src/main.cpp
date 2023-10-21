#include <iostream>
#include "Boss.h"

int main() {
	setlocale(LC_ALL, "rus");
	int team, num_workers, boss_command;
	Boss* boss = new Boss();
	
	
	std::cout << "Введите количество работников в команде: " << std::endl;
	std::cin >> num_workers;
	boss->setNumWorkers(num_workers);
	std::cout << "Введите количество комманд: " << std::endl;
	std::cin >> team;
	boss->setTeam(team);
	for (int bos_c = 0; bos_c < boss->getNumberManager();) {
		std::cout << "Введите команды для того чтобы менеджер " << boss->getManagerName(bos_c) << " распределил задачи работникам. " << std::endl;
		std::cin >> boss_command;
		while (boss->setBossCommand(boss_command)) {
			std::cin >> boss_command;
		}
		std::cout << "Команда менеджера " << boss->getManagerName(bos_c) << " получила задание!\n\n" << std::endl;
		bos_c++;
	}
	
	
	delete boss;
	return 0;

}