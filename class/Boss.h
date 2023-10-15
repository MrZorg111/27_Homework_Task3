#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Manager.h"

class Boss {
	std::string boss_name = "BigBoss";
	Manager manager;
	std::vector<Manager> managers;
	int team;
	int boss_command;
public:
	void setTeam(int team) {
		this->team = team;
		for (int num_team = 0; num_team < this->team; num_team++) {
			manager.setID(num_team + 1);
			manager.setManagerName();
			managers.push_back(manager);
		}
	}
	void setNumWorkers(int num_workers) {
		manager.setNumWorkers(num_workers);
	}
	void setBossCommand(int boss_command) {
		this->boss_command = boss_command;
		for (int manager_command = 0; manager_command < managers.size(); manager_command++) {
			std::cout << "Команда менеджера " << managers[manager_command].getMenegerName() << "получила задание от босса!" << std::endl;
			managers[manager_command].setBossCommand(this->boss_command);
		}
	}

};