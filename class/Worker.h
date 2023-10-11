#pragma once
#include <string>


class Worker{
	std::string worker_name = " ";
	char task = 'N';
public:
	void setNameWorker(int num) {
		worker_name = "worker " + num;
	}
	void setTask(char task) {
		this->task = task;
	}
}