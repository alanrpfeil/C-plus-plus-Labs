#ifndef Queue_h
#define Queue_h

#include <iostream>

using namespace std;

// The Node data structure
struct Node {
    long data;
    Node* next;
    
    Node(long d) {
        data = d;
        next = NULL;
    }
    
    ~Node(){
        
    }
};


struct Queue {
	Node* first;
	Node* last;
	int length = 0;

	Queue(){
		first = NULL;
		last = NULL;
	}

	void push(long data) {
		if (first == NULL) {
			Node* newNode = new Node(data);
			first = newNode;
			last = newNode;
		}
		else {
			Node* newNode = new Node(data);
			last->next = newNode;
			last = newNode;
		}
		length++;
	}

	long pop() {
		if (first != NULL) {
			long temp = first->data;
			Node* tempn = first;
			first = first->next;
			delete(tempn);
			length--;
			return temp;
		}
	}

	void print() {
		Node* temp = first;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	bool isEmpty() {
		if (first == NULL) {
			return true;
		}
		else {
			return false;
		}
		
	}

};

#endif
