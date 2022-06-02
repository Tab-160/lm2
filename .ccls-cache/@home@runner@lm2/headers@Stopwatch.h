//	Rab Greenup
//	2022-06-01
//	Course: CS-172
//	License: Copyright 2022 Rab Greenup
//	Resources used: https://cplusplus.com/reference/ctime/clock/
//	Header file for a timing class

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

#include <ctime>
#include <string>

class Stopwatch{
	private:
		// Holds the clock object that will be set on start
		clock_t start_obj;
		// Amount of time between most recent start and stop
		float time_elapsed;
	public:
		Stopwatch();

		// Resets the stopwatch to 0 and starts timing
		void start();

		// Stops the stopwatch
		// If called multiple times, overwrites previous time_elapsed
		void stop();

		// Returns the amount of time between most recent start and stop calls in seconds
		float getElapsedTime();

		// Returns a formatted string of class data. Runs stop
		std::string to_string();
};

#endif