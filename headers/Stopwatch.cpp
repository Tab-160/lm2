//	Rab Greenup
//	2022-06-01
//	Course: CS-172
//	License: Copyright 2022 Rab Greenup
//	Resources used: https://cplusplus.com/reference/ctime/clock/
//	Class file for a timing class

#include <string>
#include "Stopwatch.h"

Stopwatch::Stopwatch(){}

// Resets the stopwatch to 0 and starts timing
void Stopwatch::start(){
	start_obj = clock();
}

// Stops the stopwatch
// If called multiple times, overwrites previous time_elapsed
void Stopwatch::stop(){
	time_elapsed = (float)start_obj/CLOCKS_PER_SEC;
}

// Returns the amount of time between most recent start and stop calls in seconds
float Stopwatch::getElapsedTime(){
	return time_elapsed;
}

// Returns a formatted string of class data. Runs stop
std::string Stopwatch::to_string(){
	stop();
	return std::to_string(getElapsedTime()) + " seconds elapsed";
}