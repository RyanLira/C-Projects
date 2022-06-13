//Ryan Lira 2022
//sum the digits of an integer
#include <iostream>
using namespace std;

int main(){

	int number;
//input
	cout << "enter a number between 0 and 1000" << endl;
	cin >> number;

//process
	if(number < 10){
		cout << number << endl;
	}

	if(number < 100){
		cout << ((number - (number % 10))/10) + (number % 10) << endl;
	}
	else{
		cout << ((number - (number % 100))/100) 
		+ ((number - (number - (number % 100))) - (number - (number - (number % 100))) % 10) / 10
		+ (number % 100) % 10 << endl;
 	}

	return 0;
}