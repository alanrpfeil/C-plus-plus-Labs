// ConsoleApplication7.cpp : Defines the entry point for the console application.
//


#include <iostream>

using namespace std;

int main()
{

	int n = 0;
	char c;

	while (n != -2) {
		cin >> c;
		cin >> n;
		
		if (n == -1) {
			cout << endl;
			continue;
		}

		for (int i = n; i > 0; i--) {
			cout << c;
		}
		
	}
 return 0;

}

