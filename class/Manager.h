#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Worker.h"
#include "function.h"

class Manager {
	Worker worker;
	std::vector<Worker> workers;
	std::string manager_name;
	int id;
	int max_tasks;
public:
	void setManagerName() {
		this->manager_name = generation_names();
	}
	void setID(int id) {
		this->id = id;
	}
	void setNumWorkers(int num_workers) {
		this->max_tasks = num_workers;
		for (int num_w = 0; num_w < num_workers; num_w++) {
			worker.setEngaged();
			worker.setNameWorker();
			workers.push_back(worker);
		}
	}
	bool setBossCommand(int boss_command) {
		std::srand(boss_command + id);
		int total_task = rand() % max_tasks + 1;
		for (int task = 0; task < workers.size(); task++) {
			if (total_task <= 0) {
				return false;
			}
			else if (!workers[task].getEngaged()) {
				workers[task].setTask(gen_rand_task());
				total_task -= 1;
				this->max_tasks -= 1;
			}
		}
		return true;
	}
	
	std::string getManagerName() {
		return manager_name;
	}
};