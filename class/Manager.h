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
	void setManagerName(int manager_name) {
		this->manager_name = "Manager " + manager_name;
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
		
		std::srand(boss_command + id);
		total_task = rand() % (workers.size() + 1) + 1; 
		std::cout << workers.size() << std::endl;
 		for (int worker_com = 0; worker_com < 1; worker_com++) {
			std::cout << "Команда менеджера " << manager_name << "получила задание от босса!" << std::endl;
			workers[worker_com].setTask(gen_rand_task());
		}
	}
	void getListsWorkers() {
		for (int w = 0; w < workers.size(); w++) {
			std::cout << workers[w].getNameWorker() << std::endl;
		}
	}
	std::string getNameManager() {
		return manager_name;
	}

};