// reversingfile.cpp : Defines the entry point for the console application.
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

	int nlines = v.size();

	for (int i = 0; i < nlines; i++) {

		int lineno = nlines - i - 1;

		cout << i << ": " << v[lineno] << endl;

	}

	return 0;

}



