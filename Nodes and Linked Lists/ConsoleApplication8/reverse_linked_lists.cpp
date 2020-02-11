
#include <iostream>
#include "RevNode.h"

using namespace std;


void printReverse(Node* tail){
    Node* curr = tail;
    
    while (curr != NULL){
        cout << curr->data << endl;
        curr = curr->prev;
    }
}

int main(int argc, const char * argv[]) {
    
    int limit;
    cin >> limit;
    
    Node* A = new Node();
    A->data = limit;
    A->prev = NULL;
    A->next = NULL;
    
    Node* last = A;
    
    for (int i = 2; i < limit; i = i + i) {
        last = append(A, i);
    }
    
    printReverse(last);
    
    
    return 0;
    
}
