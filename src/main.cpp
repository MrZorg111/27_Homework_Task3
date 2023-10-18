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
	std::cout << "��������� ��������, ����� ����� ��������? " << std::endl;
	std::cin >> boss_command;
	while (!boss->setBossCommand(boss_command)) {
		std::cout << "������� ��� ���� ��������: " << std::endl;
		boss->setBossCommand(boss_command);
	};
	
	
	delete boss;
	return 0;

}