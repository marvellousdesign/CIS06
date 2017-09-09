#include <iostream>
#include <cmath>
using namespace std;

double sqRoot(double N) {
	double NG, LG = 1, diff = 1;
	do {
		NG = 0.5 * (LG + N / LG);
		//cout << NG << " ";
		diff = abs(NG - LG);
		LG = NG;
	} while (diff > 0.00001);
	return NG;
}

int main() {
	cout << sqRoot(50) << endl;
	return 0;
}


/*
OUTPUT:
7.07107
Press any key to continue . . .
*/



/*

Lab 2 - 9 Common Errors

Common errors occuring in if-else, switches-case, for, while and the do-while statements.

For if-else, we can use a trailing else to catch errors, for switches-case we can use default, for example of the grades program if there is a grade less than 0 then we can display an error message.

In loops, depending on how I write the program I can end up with an infinite loops for example in the stars program when trying to get the bottom part of the stars.

*/





