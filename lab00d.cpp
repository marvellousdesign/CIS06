/* A program to demonstrate calling one function from another */
#include <iostream>
using namespace std;

void triangle() {
	cout << "*\n***\n*****\n";
}

void another_func() {
	cout << "Inside another_func" << endl;
	triangle();
	cout << "Leaving another_func" << endl;
}

void main() {
	cout << "Wait for it folks..." << endl;
	triangle(); /* Call to triangle directly from main */
	cout << "Calling another_func" << endl;
	another_func(); /* Call to triangle via another_func */
	cout << "That's all folks!" << endl;
}

/*
OUTPUT:
Wait for it folks...
*
***
*****
Calling another_func
Inside another_func
*
***
*****
Leaving another_func
That's all folks!
Press any key to continue . . .
*/
