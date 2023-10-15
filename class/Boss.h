#pragma once
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
			manager.setManagerName(num_team + 1);
			managers.push_back(manager);
		}
	}
	void setNumWorkers(int num_workers) {
		manager.setNumWorkers(num_workers);
	}
	void setBossCommand(int boss_command) {
		this->boss_command = boss_command;
		for (int manager_command = 0; manager_command < managers.size(); manager_command++) {
			managers[manager_command].setBossCommand(this->boss_command);
		}
	}

	void getListsManager() {
		for (int m = 0; m < managers.size(); m++) {
			std::cout << managers[m].getNameManager() << std::endl;
			managers[m].getListsWorkers();
			std::cout << std::endl;
		}
	}
};