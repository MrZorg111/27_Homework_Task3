#pragma once
#include <string>


class Worker {
	std::string worker_name = " ";
	char task;
public:
	void setNameWorker(int num) {
		worker_name = "worker " + num;
	}
	void setTask(char task) {
		this->task = task;
	}
	std::string getNameWorker() {
		return worker_name;
	}
};