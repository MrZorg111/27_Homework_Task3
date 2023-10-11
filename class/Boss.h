#pragma once
#include <string>
#include <vector>
#include "Manager.h"

class Boss {
	std::string boss_name = "BigBoss";
	Manager mansger;
	std::vector<Manager> managers;
	int team;
	int boss_command;
public:
	void setTeam(int team) {
		this->team = team;
	}
	void setBossCommand(int boss_command) {
		this->boss_command = boss_command;
	}
};