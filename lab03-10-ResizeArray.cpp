#include <iostream>
using namespace std;

int *arr;
int size;

void resizeArr(int* &newArr) {
	int* resize = new int[size * 2];
	for (int i = 0; i < size; i++) {
		resize[i] = newArr[i];
	}
	cout << endl;
	delete[] newArr;
	newArr = resize;
	size *= 2;
}

int main() {
	size = 5;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = i;
		cout << arr[i] << endl;
	}
	resizeArr(arr);
	cout << endl;
	for (int i = (size / 2); i < size; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;
}

/*
OUTPUT:
0
1
2
3
4


0
1
2
3
4
5
6
7
8
9
Press any key to continue . . .
*/
