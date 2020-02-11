#include <iostream>
#include "Node.h"

using namespace std;

void print(Node* head){
    Node* curr = head;
    
    while (curr != 0){
        cout << curr->data << endl;
        curr = curr->next;
    }
}

int main(int argc, const char * argv[]) {
    
    int limit;
    
    cin >> limit;
    
    Node* list = new Node();
    list->data = 0;
    list->next = NULL;
    
    for (int i = 1; i <= limit; i++){
        append(list, i);
    }
    
    print(list);
    
    return 0;
}
