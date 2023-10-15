#pragma once
#include <string>
#include "function.h"


class Worker {
	std::string worker_name = " ";
	char task;
public:
	void setNameWorker() {
		worker_name = generation_names();
	}
	void setTask(char task) {
		this->task = task;
	}
	char getTask() {
		return task;
	}
};