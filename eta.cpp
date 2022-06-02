//Ryan Lira May 2, 2022
//this is a function which will go inside
//a larger function so solve higher order
//linear equations.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

float a;
float b;
float c;

cout << "a; ";
cin >> a;
cout << "b: ";
cin >> b;
cout << "c: ";
cin >> c;

cout << pow((c/(3*a) - pow(b,2)/(9*pow(a,2))),3) << endl;


	return 0;
}