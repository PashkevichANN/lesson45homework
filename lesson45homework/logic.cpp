#include "logic.h"

string calculate(int* array, int size) {
	int zero = 0;
	int negative = 0;
	int positive = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] == 0) {
			zero++;
		}
		else if (array[i] < 0) {
			negative++;
		}
		else {
			positive++;
		}
	}
	string msg = "Amount of zero: " + to_string(zero) + ", negative number: "
		+ to_string(negative) + ", positive number: " + to_string(positive);

	return msg;
}