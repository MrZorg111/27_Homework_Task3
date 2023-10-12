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
	}
};