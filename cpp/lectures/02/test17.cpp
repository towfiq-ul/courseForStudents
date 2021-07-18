#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main () {

	time_t n=0;
	srand(time(0));
	while(n<10){	
		cout << rand() % 10 << " ";
		cout << rand() % 100 << " ";
		cout << rand() % 1000 << " ";
		cout << rand() << endl;
		
		n++;
	}
	return 0;
}
