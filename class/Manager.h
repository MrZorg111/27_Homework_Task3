#pragma once
#include <string>
#include <vector>
#include "Worker.h"

class Manager {
	Worker worker;
	std::vector<Worker> workers;
	std::string manager_name;
	int id;
	int num_workers; 
public:
	void setManagerName(int manager_name) {
		this->manager_name = "manager " + manager_name;
	}
	void setID(int id) {
		this->id = id;
	}
	void setNumWorkers(int num_workers) {
		this->num_workers = num_workers;
		for (int num_workers = 0; num_workers < this->num_workers; num_workers++) {
			worker.setNameWorker(num_workers + 1);
			workers.push_back(worker);
		}
	}
	void setBossCommand(int boss_command) {

	}
};