#ifndef RevNode_h
#define RevNode_h


// Define the Node struct below

struct Node {
	int data;
	Node * next;
	Node * prev;
};

// Define the append function below

Node * append(Node * d, int value) {
	
		Node* n = new Node();
		n->data = value;
		n->next = NULL;
		n->prev = NULL;

		Node* curr = d;

		while (curr->next != NULL) {
			curr = curr->next;
			}
		
		n->prev = curr;
		curr->next = n;
		
		return n;
	}

// Do not write any code below this line
#endif
