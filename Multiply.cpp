//multiply the digits of an integer

#include <iostream>
using namespace std;

int main(){

	int number;
//input
	cout << "enter a number between 0 and 1000" << endl;
	cin >> number;
	cout << endl;


//process
	if(number < 10){
		cout << number << endl;
	}
	else if(number < 100){
		cout << ((number - (number % 10))/10) * (number % 10) << endl;
	}
	else if(number < 1000){
		cout << ((number - (number % 100)) / 100)
		* (((number % 100) - (number % 10)) / 10)
		* (number % 10) << endl;
 	}

	return 0;
}