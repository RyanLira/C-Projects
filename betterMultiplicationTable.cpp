// takes four inputs 
// R1, R2, C1, C2
// and makes a multiplication table out of them

#include <iostream>
using namespace std;

int main(){
//data declaration
	int r1;
	int r2;
	int c1;
	int c2;

//input
	cout << "input r1: ";
	cin >> r1;
	cout << "input r2: ";
	cin >> r2;
	cout << "input c1: ";
	cin >> c1;
	cout << "input c2: ";
	cin >> c2;

//process
	for(int i = r1; i < r2; i++){
		for(int j = c1; j < c2; j++){
			cout << i*j << "   ";
		}
		cout << endl;
		cout << endl;
	}
	return 0;
}