#pragma once
#include <string>
#include <vector>
#include "Worker.h"

class Manager {
	Worker worker;
	std::vector<Worker> workers;
	std::string manager_name;
	int id;
	int num_workers; // „исло рабочих в команде, придумать переменную
public:
	void setManagerName(int manager_name) {
		this->manager_name = "manager " + manager_name;
	}
	void setID(int id) {
		this->id = id;
	}
	void setNumWorkers(int num_workers) {
		this->num_workers = num_workers;
	}
};