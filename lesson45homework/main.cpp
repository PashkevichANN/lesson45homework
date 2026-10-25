#include "logic.h"

int main() {
	int array[SIZE];
	cout << "Input 10 numbers: ";
	for (int i = 0; i < SIZE; i++) {
		cin >> array[i];
	}


	cout << calculate(array, SIZE) << endl;
	return 0;
}