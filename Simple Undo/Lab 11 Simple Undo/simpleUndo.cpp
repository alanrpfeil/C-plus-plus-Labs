#include "stdafx.h"
#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int total = 0;
    
    char command = 'a';
    
    Stack ops = Stack();
    
	while (command != 'q') {
		cin >> command;
		if (command == 'a') {
			ops.push(total);
			int value;
			cin >> value;
			total += value;

			cout << "Total is: " << total << endl;
		
		}
		if (command == 's') {
			ops.push(total);
			int value;
			cin >> value;
			total -= value;

			cout << "Total is: " << total << endl;
		}
		if (command == 'm') {
			ops.push(total);
			int value;
			cin >> value;
			total *= value;

			cout << "Total is: " << total << endl;
		}
		if (command == 'd') {
			ops.push(total);
			int value;
			cin >> value;
			total /= value;
			
			cout << "Total is: " << total << endl;
		}
        if (command == 'z'){
            if (ops.isEmpty()){
                cout << "Can't undo anymore..." << endl;
				total = 0;
            }
            else {
				int total = ops.pop();
                cout << "Total is: " << total << endl;
            }
        }
    }
    
    cout << "Bye!" << endl;
    
    return 0;
}
