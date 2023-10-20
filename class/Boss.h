#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Manager.h"

class Boss {
	std::string boss_name = "BigBoss";
	Manager manager;
	std::vector<Manager> managers;
	int num_team = 0;
public:
	void setTeam(int team) {
		for (int num_team = 0; num_team < team; num_team++) {
			manager.setID(num_team + 1);
			manager.setManagerName();
			managers.push_back(manager);
		}
	}
	void setNumWorkers(int num_workers) {
		manager.setNumWorkers(num_workers);
	}
	bool setBossCommand(int boss_command) {
		if (managers[num_team].setBossCommand(boss_command)) {
			num_team += 1;
			return true;
		}
		return false;
	}
	int getNumberManager() {
		return managers.size();
	}
};