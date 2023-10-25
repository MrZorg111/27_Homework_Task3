#include <iostream>
#include "Boss.h"

int main() {
	setlocale(LC_ALL, "rus");
	int team, num_workers, boss_command;
	Boss* boss = new Boss();
	
	//���� ����� �������� ������ � ����������

	std::cout << "������� ���������� ������: " << std::endl;					
	std::cin >> team;
	boss->setNumTeam(team);
	std::cout << "������� ���������� ����������: " << std::endl;
	std::cin >> num_workers;
	boss-> setNumWorkers(num_workers);

	//�������� �������� ������ � ����������
	boss->setListsTeam();

	//���� �������� ��������� �����������
	for (int b_c = 0; b_c < team; b_c++) {
		std::cout << "��������� ����, ����� ����� ��������? " << std::endl;
		std::cin >> boss_command;
		
		if (!boss->setBossCommand(boss_command, b_c)) {
			do {
				std::cout << "����� ��� ���� �������: " << std::endl;
				std::cin >> boss_command;
			} while (!boss->setBossCommand(boss_command, b_c));
		}
	}


	//���� ������ ����������� ������������� �����
	std::cout << "��������� " << boss->getNameBoss() << ", ������� �� ����������������� ���������� ����� ��������� ? (y / n)" << std::endl;
	char answer;
	std::cin >> answer;
	if (answer == 'y') {
		boss->getListsTeam();
	}
	else {
		std::cout << "���� ���� � ���������� �������� ��������, �� ����� ����� �� ����� ��������� � ������ ���? " << std::endl;
	}


	//��������� ������
	delete boss;
	return 0;
}