#include "logic.h"

bool in_order_or_not(int* array, int size) {
	bool result;
	int decrease = 0;
	int increase = 0;

	for (int i = 0;i < size -1; i++) {
		if (array[i] <= array[i+1]) {
			increase++;
		}
		else if (array[i] >= array[i + 1]) {
			decrease++;
		}
	}
	result = (increase == size - 1 or decrease == size - 1) ? true : false;

	return result;
}