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
public:
	void setNumWorkers(int workers) {
		this->num_workers = workers;
	}
	void setManagerName() {
		this->manager_name = generation_names();
	}
	void setID(int id) {
		this->id = id;
	}
	void setListsWorkers() {
		for (int lists_workers = 0; lists_workers < num_workers; lists_workers++) {
			worker.setNameWorker();
			workers.push_back(worker);

		}
	}
	void setClear() {
		workers.clear();
	}
	bool setCheckBossCommand(int boss_command) {
		std::srand(boss_command + id);
		int total_task = rand() % num_workers + 1;
		if (total_task == num_workers) {
			std::cout << "Ожидайте, идет распределение заданий! " << std::endl;
			for (int w_t = 0; w_t < workers.size(); w_t++) {
				workers[w_t].setTask(gen_rand_task());
			}
			return true;
		}
		else if (total_task < num_workers) {
			num_workers -= total_task;
			return false;
		}
		return false; //Чтобы не выдавал предупреждения
	}

	//_______________________________________________________________________//

	std::string getManagerName() {
		return manager_name;
	}
	void getNameWorkerAndTask() {
		std::cout << "Список команды менеджера " << manager_name << ": " << std::endl;
		for (int i = 0; i < workers.size(); i++) {
			std::cout << "\t--Работник " << workers[i].getNameWorker() << " выполняет задачу " << workers[i].getTask() << std::endl;
		}
	}
	
};