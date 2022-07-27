//write a program to read N integers into an Array
//then display it backwards

#include <iostream>
using namespace std;

int main(){

//input
	int n;
	int q;
	cout << "how many integers: ";
	cin >> n;
	int ariana[n];

//process
	for(int i = 0; i < n; i++){
		cin >> q;
		ariana[i] = q;
	}

//output 
	cout << endl;
	cout << endl;
	for(int i = n - 1; i >= 0; i--){
	cout << ariana[i] << endl;
	}
	return 0;
}