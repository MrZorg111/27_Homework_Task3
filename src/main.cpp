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
		std::cout << "������� ������� ��� ���� ����� �������� " << boss->getManagerName(bos_c) << " ����������� ������ ����������. " << std::endl;
		std::cin >> boss_command;
		while (boss->setBossCommand(boss_command)) {
			std::cin >> boss_command;
		}
		std::cout << "������� ��������� " << boss->getManagerName(bos_c) << " �������� �������!\n\n" << std::endl;
		bos_c++;
	}
	
	
	delete boss;
	return 0;

}