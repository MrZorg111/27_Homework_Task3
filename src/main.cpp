#include <iostream>
#include "Boss.h"

int main() {
	int team, num_workers;
	Boss* boss = new Boss();
	
	std::cout << "¬ведите количество комманд: " << std::endl;
	std::cin >> team;
	boss->setTeam(team);
	std::cout << "¬ведите количество работников в команде: " << std::endl;
	std::cin >> num_workers;
	boss->setNumWorkers(num_workers);

	return 0;
}