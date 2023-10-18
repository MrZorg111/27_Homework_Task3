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
	int num_workers; 
	int max_tasks;
public:
	void setManagerName() {
		this->manager_name = generation_names();
	}
	void setID(int id) {
		this->id = id;
	}
	void setNumWorkers(int num_workers) {
		this->num_workers = num_workers;
		this->max_tasks = num_workers;
		for (int num_workers = 0; num_workers < this->num_workers; num_workers++) {
			worker.setNameWorker();
			workers.push_back(worker);
		}
	}
	bool setBossCommand(int boss_command) {
		std::srand(boss_command + id);
		int total_task = rand() % max_tasks + 1;
		for (int task = 0; task < workers.size(); task++) {
			if (workers[task].getEngaged()) {
				max_tasks -= 1;
			}
			else {
				workers[task].setTask(gen_rand_task());
				max_tasks -= 1;
			}
		}
		if (max_tasks == 0) {
			std::cout << "Команда менеджера " << manager_name << " получила задание!" << std::endl;
			return true;
		}
		return false;
	}
	std::string getMenegerName() {
		return manager_name;
	}
};//