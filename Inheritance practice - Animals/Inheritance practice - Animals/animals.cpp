
#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "display.h"
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
	vector <Animal*> Animals;
	int anAmt, age;
	string name;
	char type;

	cin >> anAmt;

	for (int i = 0; i < anAmt; i++) {
		cin >> type;
		cin >> name;
		cin >> age;

		if (type == 'A') {
			Animals.push_back(new Animal());
			Animals[i]->setName(name);
			Animals[i]->setAge(age);
		}
		else if (type == 'D') {
			Animals.push_back(new Dog());
			Animals[i]->setName(name);
			Animals[i]->setAge(age);
		}
	}

	display(Animals);
	for (int i = 0; i < anAmt; i++) {
		delete Animals[i];
	}

    return 0;
}

