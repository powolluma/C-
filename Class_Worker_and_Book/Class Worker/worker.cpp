#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

void Worker::WorkerFromYear(const Worker workers[], int size, int YearToWork) const{
	for (int i = 0; i < size; i++) {
		if (workers[i].GetYearToWork() > 2017) {
			break;
		}
	}
}

