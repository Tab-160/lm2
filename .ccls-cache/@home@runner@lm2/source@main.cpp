//	Rab Greenup
//	2022-06-01
//	Course: CS-172
//	License: Copyright 2022 Rab Greenup
//	Resources used: 

#include <iostream>
#include "../headers/Stopwatch.h"
#include "../headers/EvenNumber.h"

int main() {
	Stopwatch timing;

	// Start the timer
	timing.start();

	// Calculate the first 10,000 fibbinachi numbers

	long long int num1 = 0;
	long long int num2 = 1;

	for(int i = 0; i < 5000; i++){
		num1 += num2;
		std::cout << num1 << ", ";
		num2 += num1;
		std::cout << num2 << ", ";
	}
	std::cout << std::endl << std::endl;

	// stop and print the time this took
	std::cout << timing.to_string() << std::endl;

	int temp_num;

	while(true){
		std::cout << "Please enter an even number: ";
		std::cin >> temp_num;
		// check if atually an even number
		if(temp_num % 2 == 0){
			// if even, leave loop
			break;
		}
		// Otherwise, try the user again
	}
	EvenNumber start_at;
	EvenNumber end_at = EvenNumber(temp_num);

	// loop through, counting from start to end
	// end_at stays the same, change start_at to get closer
	while(true){
		if(start_at == end_at){
			// If the two numbers are the same, leave loop
			break;
		}
		// if start_at is greater, decrement
		if(start_at > end_at){
			start_at.getPrevious();
		} else {
			// Here, end_at is greater, so increase start_at
			start_at.getNext();
		}
		// Print current number
		std::cout << start_at.getValue() << ", ";
	}
	
}