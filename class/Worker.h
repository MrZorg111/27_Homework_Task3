#pragma once
#include <string>
#include "function.h"


class Worker {
	std::string worker_name;
	bool engaged = false;
	char task;
public:
	void setNameWorker() {
		this->worker_name = generation_names();
	}
	void setTask(char task) {
		this->task = task;
		engaged = true;
	}
	
	//_______________________________________________//

	std::string getNameWorker() {
		return worker_name;
	}
	char getTask() {
		return task;
	}
};