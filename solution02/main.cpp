#include "logic.h"

int main() {
	int array[SIZE];

	cout << "Input 10 numbers: ";
	for (int i = 0; i < SIZE; i++) {
		cin >> array[i];
	}

	cout << (in_order_or_not(array, SIZE) ? "all numbers are ordered"
		: "all numbers aren't ordered");


	return 0;
}