#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"

void merge(long list[], long start, long mid, long end) {
	long i = start;
	long j = mid + 1;

	while (j <= end && i <= mid) {
		if (list[i] < list[j]) {
			i++;
		}
		else {
			long temp = list[j];
			for (long k = j; k > i; k--) {
				list[k] = list[k - 1];
			}
			list[i] = temp;

			mid++;
			i++;
			j++;
		}
	}
}


void sort(long list[], long start, long end) {
	if (start < end) {
		long mid = (start + end) / 2;

		sort(list, start, mid);
		sort(list, mid + 1, end);

		merge(list, start, mid, end);
	}
}

void efficientRandomSortedList(long temp[], long s) {
	// Get a new random device
	randomizer device = new_randomizer();
	// Get a uniform distribution from 1 to 1000
	uniform_distribution range = new_distribution(1, 1000);

	for (long i = 0; i < s; i++) {
		// At every cell of the array, insert a randomly selected number
		// from distribution defined above
		temp[i] = sample(range, device);
	}
	// Now sort the array using insertion_sort
	sort(temp, 0, s);
}






#endif /* DataGen_h */