#ifndef Stack_h
#define Stack_h

// The Node data structure
struct Node {
    int data;
    Node* next;
    
    Node(int d) {
        data = d;
        next = NULL;
    }
    
    ~Node(){
        
    }
};


struct Stack {
    Node* head;
    bool empty;
    
    Stack() {
        head = NULL;
        empty = true;
    }
    
    void push(int data) {
        if (head == NULL) {
            head = new Node(data);
        }
        else {
            Node* oldHead = head;
            head = new Node(data);
            head->next = oldHead;
        }
        empty = false;
    }
    
    int pop() {
        Node* temp = head;
        head = head->next;
        
        if (head == NULL){
            empty = true;
        }
        
        int result = temp->data;
        delete temp;
        return result;
    }
    
    void print() {
        Node* p = head;
        while (p != NULL){
            std::cout << p->data << " ";
            p = p->next;
        }
        std::cout << std::endl;
    }
    
    bool isEmpty(){
        return empty;
    }
    
    ~Stack(){
        while(!empty){
            pop();
        }
    }
};

#endif
