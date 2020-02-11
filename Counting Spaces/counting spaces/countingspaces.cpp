// countingspaces.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	
	int spaces = 0;
	char space;
	ifstream file;
	file.open("words.txt");

	if (!file) {
		cout << "Cannot find file" << endl;
		exit(1);
	}

	while (!file.eof()) {
		
		file.get(space);
		
		if (space == ' ' || space == '\n') {
			spaces++;
		} 
	}

	cout << spaces << endl;

	return 0;
}

