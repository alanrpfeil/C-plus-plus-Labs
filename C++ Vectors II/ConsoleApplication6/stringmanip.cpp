// ConsoleApplication6.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  
	string word;
	vector<string> wordvector;
	
	while (true) {
		
		cin >> word;

		if (word == "quit") {
			break;
		}
		else if (word.length() > 1) {
			wordvector.push_back(word);
		}
		else if (word.length() == 1) {
			for (int i = 0; i < wordvector.size(); i++) {
				if (word.at(0) == wordvector[i].at(0)) {
					cout << wordvector[i] << endl;
				}
			}
		}


	}

	
	return 0;
}

