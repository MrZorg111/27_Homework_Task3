#include <iostream>
#include "Boss.h"

int main() {
	int team, num_workers;
	Boss* boss = new Boss();
	
	std::cout << "������� ���������� �������: " << std::endl;
	std::cin >> team;
	boss->setTeam(team);

	return 0;
}