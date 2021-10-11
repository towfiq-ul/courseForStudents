#include <bits/stdc++.h>
using namespace std;

void emptyLine();

size_t factorial(size_t n);

int main() {
	
	// factorial of n = product of 1 to n 
	//5! = 1 * 2 * 3 * 4 * 5;
	//5! = 4! * 5;
	//4! = 3! * 4;
	//3! = 2! * 3;
	//2! = 1! * 2;
	//1! = 0! * 1 = 1;
	//0! = 1;
	//n! = (n-1)! * n;
	//2! = (2-1)! * 2 = 1! * 2;
	//1! = (1-1)! * 1 = 0! * 1;
	//0! = 1;
	
	// size_t => unsigned long long int

	size_t n;
	while( cin >> n && (n >= (size_t) 0) ) {
		cout << factorial(n);
		emptyLine();
	}
	return 0;	

}



void emptyLine() {
	cout <<endl;
}

size_t factorial(size_t n) {

	if( n == (size_t) 0 ) {
		return (size_t) 1;
	}

	return factorial(n-1) * n;
}
