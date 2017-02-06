#include <iostream>
#include <cmath>
using namespace std;
int main() {
	const double PI = 3.14;
	double c, a, v, sa, r;
	cout << "This program will find the area and circumference of a circle,\nand the volume and surface area of a sphere with the radius." << endl;
	cout << "Please enter a radius: ";
	cin >> r;
	c = 2 * PI * r;
	cout << "The circumference of a circle is " << c << endl;
	a = PI * pow(r, 2.0);
	cout << "The area of a circle is " << a << endl;
	v = 4 * PI * pow(r, 3.0) / 3;
	cout << "The volume of a sphere is " << v << endl;
	sa = 4 * PI * pow(r, 2.0);
	cout << "The surface area of a sphere is " << sa << endl;
}

/*
OUTPUT:
This program will find the area and circumference of a circle,
and the volume and surface area of a sphere with the radius.
Please enter a radius: 7.5
The circumference of a circle is 47.1
The area of a circle is 176.625
The volume of a sphere is 1766.25
The surface area of a sphere is 706.5
Press any key to continue . . .
*/