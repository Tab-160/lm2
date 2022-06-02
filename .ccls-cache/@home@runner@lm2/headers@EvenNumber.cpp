//	Rab Greenup
//	2022-06-01
//	Course: CS-172
//	License: Copyright 2022 Rab Greenup
//	Resources used: https://cplusplus.com/reference/ctime/clock/
//	Class file for a Even Number class

#include "EvenNumber.h"

// initalizes number to 0
EvenNumber::EvenNumber() : EvenNumber(0){}
// num must be even. if not, gets set to 0
EvenNumber::EvenNumber(int num){
	if(num % 2 == 0){
		number = num;
	} else {
		number = 0;
	}
}

// returns current value
int EvenNumber::getValue(){
	return number;
}

// returns and sets to next even number
int EvenNumber::getNext(){
	number += 2;
	return getValue();
}

// returns and sets to previous even number
int EvenNumber::getPrevious(){
	number -= 2;
	return getValue();
}

