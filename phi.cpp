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
float d;

cout << "a: ";
cin >> a;
cout << "b: ";
cin >> b;
cout << "c: ";
cin >> c;
cout << "d: ";
cin >> d;


cout << (-pow(b,3))/(27*pow(a,3)) + (b*c)/(6*pow(a,2)) - d/(2*a) << endl;




	return 0;
}