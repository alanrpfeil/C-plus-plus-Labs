#include <iostream>
#include "Queue.h"
#include "TimeSupport.h"
#include "RandomSupport.h"
using namespace std;

// Just a counter
long C = 0;

// A function that increments the counter
void process(long task){
    C++;
}

int main(int argc, const char * argv[]) {
    
    // We will insert 1 million random elements in our to-do list
    const int N = 1000000;
    randomizer device = new_randomizer();
    uniform_distribution dist = new_distribution(1, N);
    
    // Create a to-do list as a queue
    Queue toDoList;
    
    // Measure how long it takes to push all the elements
    timestamp insertStart = current_time();
    
    for (int i = 0; i < N; i++) {
        // Get a random number
        long a = sample(dist, device);
        // Push it into the queue
        toDoList.push(a);
    }
    
    timestamp insertEnd = current_time();
    
    // You can print out the queue, but only do it for small N
    //toDoList.print();
    
    // Print out how long it took to do all the insertions
    // For 1 million elements, it shluld be ~200 milliseconds
    long insertDuration = time_diff(insertStart, insertEnd);
    cout << insertDuration << " ms to push " << N << " elements" << endl;
    
    // Now measure how long it takes to drain the queue
    timestamp popStart = current_time();
    while (!toDoList.isEmpty()){
        // Get the next task on the list
        long curr = toDoList.pop();
        // Process it
        process(curr);
    }
    timestamp popEnd = current_time();
    
    // Print out how long it took to drain the queue
    // For 1 million elements, it shluld be ~100 milliseconds
    long popDuration = time_diff(popStart, popEnd);
    cout << popDuration << " ms to push " << C << " elements" << endl;
    
    return 0;
}
