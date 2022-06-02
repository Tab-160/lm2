//	Rab Greenup
//	2022-06-01
//	Course: CS-172
//	License: Copyright 2022 Rab Greenup
//	Resources used: https://cplusplus.com/reference/ctime/clock/
//	Header file for a timing class

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

#include <ctime>

class Stopwatch{
	private:
		// Holds the clock object that will be set on start
		clock_t start_obj;
	public:
		void start();

		void stop();

		// In seconds
		float getElapsedTime();
};

#endif