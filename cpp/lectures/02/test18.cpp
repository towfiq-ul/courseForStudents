#include<bits/stdc++.h>
using namespace std;

int main () {

	double dd;

	while(true){
		cin >> dd;

		cout << "printf cout cout" << endl; 
	
		printf("%lf ", dd);
		printf("%.3lf ", dd);
		printf("%3.2lf ", dd);
		
		cout.precision(10);

		cout << dd << endl;

		cout << fixed << dd << endl;

	}

	return 0;
	
}
