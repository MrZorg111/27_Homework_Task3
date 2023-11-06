#include <iostream>
#include "Boss.h"

int main() {
	int team, num_workers, boss_command;
	Boss* boss = new Boss();
	
	//The block for entering team and employee settings

	std::cout << "Enter the number of commands: " << std::endl;					
	std::cin >> team;
	boss->setNumTeam(team);
	std::cout << "Enter the number of employees: " << std::endl;
	std::cin >> num_workers;
	boss-> setNumWorkers(num_workers);

	//Creating a hierarchy of teams and employees
	boss->setListsTeam();

	//The unit for transmitting orders to subordinates
	for (int b_c = 0; b_c < team; b_c++) {
		std::cout << "Dear boss, what are the instructions? " << std::endl;
		std::cin >> boss_command;
		
		if (!boss->setBossCommand(boss_command, b_c)) {
			do {
				std::cout << "Give me one more task: " << std::endl;
				std::cin >> boss_command;
			} while (!boss->setBossCommand(boss_command, b_c));
		}
	}


	//The block of output of the results of the distribution of labor
	std::cout << "Respected " << boss->getNameBoss() << ", would you like to inspect the execution of your orders? (y / n)" << std::endl;
	char answer;
	std::cin >> answer;
	if (answer == 'y') {
		boss->getListsTeam();
	}
	else {
		std::cout << "Your faith in your subordinates is worthy of respect, but maybe it's worth checking them out another time? " << std::endl;
	}


	//Covering the tracks
	delete boss;
	return 0;
}