#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x1, x2, y1, y2, D, value1, value2;
	cout << "Enter for x1: ";
	cin >> x1;
	cout << "Enter for y1: ";
	cin >> y1;
	cout << "Enter for x2: ";
	cin >> x2;
	cout << "Enter for y2: ";
	cin >> y2;

	value1 = x1 - x2;
	value2 = y1 - y2;
	D = sqrt(pow(value1, 2) + pow(value2, 2));
	cout << "The distance between two points in a three dimensional space is " << D << endl;
}

/*
OUTPUT:
Enter for x1: 2
Enter for y1: 3
Enter for x2: 8
Enter for y2: -5
The distance between two points in a three dimensional space is 10
Press any key to continue . . .
*/