/*
Ryan Lira
This program inds the solution to quadratic equations.
*/

#include <iostream>
#include <cmath>
using namespace std;

//Quadratic equation functions
float solutionOne(int a, int b, int c){
    return (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
}

float solutionTwo(int a, int b, int c){
    return (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
}

//main program
int main()
{
    //variables
    int a;
    int b;
    int c;
    float solution1;
    float solution2;
    
    //input
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c; 
    cout << endl;
    cout << endl;
    
    //output
    cout << "solution 1 = ";
    cout << solutionOne(a,b,c) << endl;
    cout << "solution 2: ";
    cout << solutionTwo(a,b,c) << endl;
   
    return 0;
}