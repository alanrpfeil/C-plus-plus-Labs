#include "stdafx.h"
#include <iostream>
#include "HashTable.h"
#include "RandomSupport.h"
#include "TimeSupport.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int N = 100000000;
    int K = 100000;
    
    HashTable c = HashTable(K);
    
    timestamp insertBegin = current_time();
    
    for (int i = 0; i < N; i++){
        c.insert(i);
    }
    
    timestamp insertEnd = current_time();
    
    cout << "Inserted " << N << " elements into table size " << K << endl;
    
    timestamp searchBegin = current_time();
    
    randomizer device = new_randomizer();
    uniform_distribution dist = new_distribution(0, N);
    
    int X = (int)sample(dist, device);
    
    bool found =  c.search(X);
    
    timestamp searchEnd = current_time();
    
    
    long insertDuration = time_diff(insertBegin, insertEnd);
    long searchDuration = time_diff(searchBegin, searchEnd);
    
    cout << "Took " << insertDuration << " ms to insert " << N << endl;
    
    if (found){
        cout << "Took " << searchDuration << " ms to find " << X << endl;
    }
    else{
        cout << "Took " << searchDuration << " ms to find " << X << " is not in the table" << endl;
    }
    
    
    return 0;
}
