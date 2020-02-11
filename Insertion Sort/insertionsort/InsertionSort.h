#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements

void insertion_sort(int num[], int length) {

	for (int i = 0; i < length; i++) {
		int j = i;
		while (j > 0 && num[j - 1] > num[j]) {

			swap(num, j - 1, j);
			j = j - 1;
		}
	}

}

// Do not write any code below this line
#endif
