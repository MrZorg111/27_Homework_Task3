#include <iostream>
#include "Boss.h"

int main() {
	int team, num_workers;
	Boss* boss = new Boss();
	
	std::cout << "¬ведите количество комманд: " << std::endl;
	std::cin >> team;
	boss->setTeam(team);

	return 0;
}