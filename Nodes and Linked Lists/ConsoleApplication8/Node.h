#ifndef Node_h
#define Node_h

// Define the Node struct below

struct Node {
	int data;
	Node* next;
};

//Define the append function below

void append(Node* n, int value) {

	Node* temp = new Node();
	temp->data = value;
	temp->next = NULL;

	Node * curr = n;

	while (curr->next != NULL) {
		curr = curr->next;
	}
	curr->next = temp;
}

// Do not write any code below this line
#endif
