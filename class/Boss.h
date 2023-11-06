#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Manager.h"

class Boss {
	std::string boss_name = "BigBoss";
	Manager manager;
	std::vector<Manager> managers;
	int num_team;
public:
	void setNumTeam(int team) {
		this->num_team = team;
	}
	void setNumWorkers(int workers) {
		manager.setNumWorkers(workers);
	}
	void setListsTeam() {
		std::cout << "Expect it! We distribute employees into teams!" << std::endl;
		for (int lists_team = 0; lists_team < num_team; lists_team++) {
			manager.setListsWorkers();
			manager.setManagerName();
			manager.setManagerName();
			managers.push_back(manager);
			manager.setClear();
		}
	}
	bool setBossCommand(int boss_command, int n) {
		if (managers[n].setCheckBossCommand(boss_command)) {
			std::cout << "\n----Manager's team " << managers[n].getManagerName() << " fully equipped with work!----\n\n" << std::endl;
			return true;
		}
		return false;
	}
		
	//________________________________________________________//
	
	std::string getNameBoss() {
		return boss_name;
	}
	void getListsTeam() {
		for (int t = 0; t < num_team; t++) {
			managers[t].getNameWorkerAndTask();
			std::cout << "\n\n";
		}
	}
};