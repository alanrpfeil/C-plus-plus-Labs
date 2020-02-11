
#include <iostream>
#include "TimeSupport.h"
#include "DataGen.h"

using namespace std;

// A simple function for displaying the contents of an array
void display(long list[], long s) {
	for (long i = 0; i < s; i++) {
		cout << list[i] << " ";
	}
	cout << endl;
}

int main(int argc, const char * argv[]) {
	const long size = 30000;
	// Visual Studio users will have to hard-code the size of the array
	long* v = new long[size];

	// Get a timestamp of the current time
	timestamp start = current_time();

	// Exacute the algorithm
	efficientRandomSortedList(v, size);

	// Get a timestamp of the current time
	timestamp end = current_time();

	// Take the difference between starting time and ending time
	// The difference is in terms of milliseconds (mill) or seconds (sec)
	long diff = time_diff(start, end, mill);

	cout << "Completed in under 5 seconds: " << (bool)(diff < 5000) << endl;

	// Display the list of numbers (don't do this for large lists)
	// display(v, size);
	delete[] v;
	return 0;
}