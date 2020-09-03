//============================================================================
// Name        : feetToMeters.cpp
// Author      : Robert Zeelie
// Version     : 1.00.00
// Copyright   : Your copyright notice
// Description : It converts feet into meters
//============================================================================

#include <iostream>
using namespace std;

//a method to convert feet to meters
double convert (double feet) {

	double feetInMeters = 3.28084;
	double temp;

	temp = (feet / feetInMeters);

	return temp;
}

//main method
int main() {

	double feet;
	double answer;

	cout << "Welcome to the distance converter" << endl;
	cout << "\nPlease enter the number of feet you" << endl;
	cout << "would like to convert into meters: ";
	cin >> feet;

	answer = convert(feet);

	cout << "\nThere is : " << answer << " meters in : " << feet << " feet."  << endl;

	return 0;
}

























