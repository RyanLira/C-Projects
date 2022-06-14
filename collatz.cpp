//collatz conjecture
#include <iostream>
using namespace std;

int main(){
	//data
	int n;

	//input
	cout << "enter an integer below 2147483647: ";
	cin >> n;

	//process
	while(n != 1){

		if(n % 2 == 0){
			n = n / 2;
			cout << n << endl;
		}

		else{
			n = (n * 3) + 1;
			cout << n << endl;
		}
	}


	return 0;
}