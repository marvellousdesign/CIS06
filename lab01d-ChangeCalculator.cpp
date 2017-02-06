#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double received, totalChange;
	int change, dollars, quarters, dimes, nickels, pennies;

	double due = 17.66;
	//double received = 20.00;

	cout << "The amount of $" << due << " is due."<< endl;
	cout << "Please enter your payment: $";
	cin >> received;

	if (due > received) {
		cout << "Please pay full amount." << endl;
	} else if (received == due) {
		cout << "No change is needed, thank you bye bye." << endl;
	} else if (received > due) {
		totalChange = received - due;
		cout << "Your total change is $" << totalChange << "."<< endl;

		change = totalChange * 100;
		dollars = change / 100;
		change = change % 100;
		quarters = change / 25;
		change = change % 25;
		dimes = change / 10;
		change = change % 10;
		nickels = change / 5;
		pennies = change % 5;

		cout << "Dispensing your changes in:" << endl;
		cout << "Dollars: " << setw(3) << dollars << endl;
		cout << "Quarters: " << setw(2) << quarters << endl;
		cout << "Dimes: " << setw(5) << dimes << endl;
		cout << "Nickels: " << setw(3) << nickels << endl;
		cout << "Pennies: " << setw(3) << pennies << endl;
	}
	return 0;
}

/*
OUTPUT:
The amount of $17.66 is due.
Please enter your payment: $20.00
Your total change is $2.34.
Dispensing your changes in:
Dollars:   2
Quarters:  1
Dimes:     0
Nickels:   1
Pennies:   4
*/
