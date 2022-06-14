//arithmatic mean, geometric mean, of 5 integers

#include <iostream>
#include <cmath>
using namespace std;

int main(){

//data instatiation
	int a;
	int b;
	int c;
	int d;
	int e;

	float arithmatic;
	float geometric;
	float standard_deviation;

//input
	cout << "enter five integrers" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d; 
	cin >> e;

//process
	arithmatic = (a + b + c + d + e) / 5;
	geometric = pow((a * b * c * d * e), 0.2);
	standard_deviation = sqrt((pow((a - arithmatic),2) 
		+ pow((b - arithmatic),2) 
		+ pow((c - arithmatic),2) 
		+ pow((d - arithmatic),2) 
		+ pow((e - arithmatic),2)) / 5);


//output
	cout << "arithmetic mean: " << arithmatic << endl;
	cout << "geometric mean: " << geometric << endl;
	cout << "standard deviation: " << standard_deviation << endl;

	return 0;
}