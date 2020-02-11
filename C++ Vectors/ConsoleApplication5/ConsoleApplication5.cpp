// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	vector <string> words;
	string mystring;
	
		while (mystring != "quit") {
			cin >> mystring;

			words.push_back(mystring);
			
		}
	


	system("pause");
return 0;
}

