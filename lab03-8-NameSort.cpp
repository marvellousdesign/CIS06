// Mary Luong - CIS 6 - Lab 3, 8 - Name Sort
#include <iostream>
#include <string>
using namespace std;

void sortArray(string[], int);

int main() {
	int i = 0;
	string names[20];
	cout << "Enter 20 names:" << endl;
	for (int i = 0; i < 20; i++) {
		cin >> names[i];
		if (strlen(names[i].c_str()) > 40) {
			cout << names[i] << " is greater than 40 length!" << endl;
			break;
		}
	}
	cout << endl;

	// Sort & display them.
	if (strlen(names[i].c_str()) < 40) {
		cout << "The sorted names are:" << endl;
		sortArray(names, 20);
		for (int i = 0; i < 20; i++) {
			cout << names[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

// Bubble Sort, page 471, 8.3-8.4
void sortArray(string arr[], int size) {
	bool swap;
	string temp;
	do {
		swap = false;
		for (int i = 0; i < (size - 1); i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

/*
OUTPUT:
Enter 20 names:
sam wen rury dom pat albert fochea qwerty kelly brandon diana jerry xiu larry amy cam gary yen uterch ian

The sorted names are:
albert amy brandon cam diana dom fochea gary ian jerry kelly larry pat qwerty rury sam uterch wen xiu yen
Press any key to continue . . .

OUTPUT2:
Enter 20 names:
qwertyuiopasdfghjklzxcvbnm,qwertyuiopasdfghjklzxcvbnm
qwertyuiopasdfghjklzxcvbnm,qwertyuiopasdfghjklzxcvbnm is greater than 40 length!

Press any key to continue . . .

*/