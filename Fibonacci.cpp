//reads an interger N and printes 
//the Nth value of the fibbonacci sequence
//unexpected twist: this program uses recursion

#include <iostream>
using namespace std;

int fibbonacci(int n){
		if(n==0){
			return 0;
		}
		if(n==1){
			return 1;
		}
		else{
			return fibbonacci(n - 1) + fibbonacci(n - 2);
		}	
}

int main(){
//data
	int n;

//input
	cout << "enter n: ";
	cin >> n;

//output
	cout << fibbonacci(n) << endl;;


	return 0;
}