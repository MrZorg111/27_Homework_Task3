#pragma once
#include <string>
#include "function.h"


class Worker {
	std::string worker_name = " ";
	bool engaged = false;
	char task;
public:
	void setNameWorker() {
		worker_name = generation_names();
	}
	void setTask(char task) {
		this->task = task;
		engaged = true;
	}
	char getTask() {
		return task;
	}
	bool getEngaged() {
		return engaged;
	}
};