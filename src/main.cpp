#include <iostream>
#include "Boss.h"

int main() {
	setlocale(LC_ALL, "rus");
	int team, num_workers, boss_command;
	Boss* boss = new Boss();
	
	
	std::cout << "������� ���������� ���������� � �������: " << std::endl;
	std::cin >> num_workers;
	boss->setNumWorkers(num_workers);
	std::cout << "������� ���������� �������: " << std::endl;
	std::cin >> team;
	boss->setTeam(team);
	for (int bos_c = 0; bos_c < boss->getNumberManager();) {
		std::cout << "��������� ��������, ����� ����� ��������? " << std::endl;
		std::cin >> boss_command;
		if (boss->setBossCommand(boss_command)) {
			bos_c++;
		}
	}
	
	
	delete boss;
	return 0;

}