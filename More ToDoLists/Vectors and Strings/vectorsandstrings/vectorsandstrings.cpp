// vectorsandstrings.cpp : Defines the entry point for the console application.
//

#include <iostream>

#include <string>

#include <fstream>

#include <vector>



using namespace std;

int main(int argc, const char * argv[]) {

	vector<string> v;

	ifstream in("code.cpp");

	string line;

	while (getline(in, line)) {

		v.push_back(line);
	}
	
	string lines;

	for (int i = 0; i < v.size(); i++) {

		lines += v[i] + "\n";
	}

	cout << lines;

	return 0;

}
