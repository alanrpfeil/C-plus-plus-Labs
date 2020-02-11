// countingwords.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {



	ifstream in("words.txt");

	int words = 0;

	string word;

	while (in >> word) {

		++words;

	}
		
	cout << words << endl;

	return 0;

}

