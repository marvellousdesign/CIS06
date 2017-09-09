#include <iostream>
#include <string>
using namespace std;

void getDate(int *dptr, int *mptr, int *yptr) {
	string s;
	cout << "Enter Date (dd-mmm-yyyy): ";
	cin >> s;

	string str1 = s.substr(0, 2);
	string str2 = s.substr(3, 3);
	string str3 = s.substr(7, 4);

	*dptr = stoi(str1);

	if (str2 == "jan") *mptr = 1;
	if (str2 == "feb") *mptr = 2;
	if (str2 == "mar") *mptr = 3;
	if (str2 == "apr") *mptr = 4;
	if (str2 == "may") *mptr = 5;
	if (str2 == "jun") *mptr = 6;
	if (str2 == "jul") *mptr = 7;
	if (str2 == "aug") *mptr = 8;
	if (str2 == "sep") *mptr = 9;
	if (str2 == "oct") *mptr = 10;
	if (str2 == "nov") *mptr = 11;
	if (str2 == "dec") *mptr = 12;

	*yptr = stoi(str3);
}

void main() {
	int day, month, year;
	getDate(&day, &month, &year);

	if (month < 10) cout << '0';
	cout << month << endl;

	if (day < 10) cout << '0';
	cout << day << endl;

	cout << year << endl;
}

/*
Output:
Enter Date (dd-mmm-yyyy): 05-nov-2017
11
05
2017
Press any key to continue . . .
*/
