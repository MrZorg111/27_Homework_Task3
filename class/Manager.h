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
	int total_task;
public:
	void setManagerName() {
		this->manager_name = generation_names();
	}
	void setID(int id) {
		this->id = id;
	}
	void setNumWorkers(int num_workers) {
		this->num_workers = num_workers;
		for (int num_workers = 0; num_workers < this->num_workers; num_workers++) {
			worker.setNameWorker();
			workers.push_back(worker);
		}
	}
	void setBossCommand(int boss_command) {
		std::srand(boss_command + id);
		total_task = rand() % (workers.size() + 1) + 1; 
		for (int worker_com = 0; worker_com < workers.size(); worker_com++) {
			workers[worker_com].setTask(gen_rand_task());
		}
	}
	std::string getMenegerName() {
		return manager_name;
	}
};