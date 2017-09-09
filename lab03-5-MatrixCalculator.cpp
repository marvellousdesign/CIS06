#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[2][2], b[2][2], c[2][2];
	int i, j;

	cout << "Enter the value of the matrix a: ";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> a[i][j];
		}
	}
	cout << endl;

	cout << "Enter the value of the matrix b: ";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> b[i][j];
		}
	}
	cout << endl;

	cout << "Will you be using +, -, or *? ";
	string reply;
	cin >> reply;
	if (reply == "+") {
		for (i = 0; i < 2; i++) {
		   for (j = 0; j < 2; j++) {
			   c[i][j] = a[i][j] + b[i][j];
		   }
	   }
	}
	if (reply == "-") {
		for (i = 0; i < 2; i++) {
		   for (j = 0; j < 2; j++) {
			   c[i][j] = a[i][j] - b[i][j];
		   }
	   }
	}
	if (reply == "*") {
		c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
		c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
		c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
		c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
	}

	cout << c[0][0] << " " << c[0][1] << endl;
	cout << c[1][0] << " " << c[1][1] << endl;
}

/*
OUTPUT1:
Enter the value of the matrix a: 1 2 3 4
Enter the value of the matrix b: 5 6 7 8

1 2   5 6
3 4   7 8

Will you be using +, -, or *? +
6 8
10 12

OUTPUT2:
Enter the value of the matrix a: 1 2 3 4
Enter the value of the matrix b: 5 6 7 8

1 2   5 6
3 4   7 8

Will you be using +, -, or *? -
-4 -4
-4 -4

OUTPUT3:
Enter the value of the matrix a: 1 2 3 4
Enter the value of the matrix b: 5 6 7 8

1 2   5 6
3 4   7 8

Will you be using +, -, or *? *
19 22
43 50
*/
