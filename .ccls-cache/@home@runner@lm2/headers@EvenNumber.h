//	Rab Greenup
//	2022-06-01
//	Course: CS-172
//	License: Copyright 2022 Rab Greenup
//	Resources used: https://cplusplus.com/reference/ctime/clock/
//	Header file for a Even Number class

#ifndef EVEN_NUMBER_H_
#define EVEN_NUMBER_H_

class EvenNumber{
	private:
		int number;
	public:
		// initalizes number to 0
		EvenNumber();
		// num must be even. if not, gets set to 0
		EvenNumber(int num);

		// returns current value
		int getValue();

		// returns and sets to next even number
		int getNext();

		// returns and sets to previous even number
		int getPrevious();

		bool operator==(EvenNumber num2){
			return number == num2.getValue();
		}

		bool operator>(EvenNumber num2){
			return number > num2.getValue();
		}

		bool operator<(EvenNumber num2){
			return number < num2.getValue();
		}
};

#endif