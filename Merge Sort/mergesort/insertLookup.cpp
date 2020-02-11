#include <iostream>
#include "DataGen.h"
#include "InsertLookup.h"
#include "TimeSupport.h"

using namespace std;

void display(long* list, long s){
    for (long i = 0; i < s; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    
    long size = 1000000;
    
    long additional = 100;
    
    const long total = size + additional;
    
    long* v = new long[total];
    
    timestamp genStart = current_time();
    
    efficientRandomSortedList(v, size);
    
    timestamp genEnd = current_time();
    
    //display(v, size);
    
    long genDuration =  time_diff(genStart, genEnd);
    
    timestamp insertStart = current_time();
    
    for (long i = 1; i <= additional; i++) {
        insert(v, size + i, -i);
    }
    
    timestamp insertEnd = current_time();
    
    //display(v, total);
    
    long insertDuration = time_diff(insertStart, insertEnd);
    
    bool insertCorrect = true;
    for (long i = 1; i < total; i++) {
        if (v[i-1] > v[i]){
            insertCorrect = false;
        }
    }
    
    timestamp searchStart = current_time();
    
    bool found = find(v, total, 42);
    
    timestamp searchEnd = current_time();
    
    long searchDuration = time_diff(searchStart, searchEnd);
    
    cout << "Fast data generation:\t" << (genDuration < 500) << endl;
    
    cout << "Fast insertions:\t" << (insertDuration < 3000) << endl;
    
    cout << "Correct insertions:\t" << insertCorrect << endl;
    
    cout << "Fast lookup:\t\t" << (searchDuration < 1) << endl;
    
    
    delete[] v;
    
    return 0;
}

//int main(int argc, const char * argv[]) {
//
//    long size = 3000000;  // 3 million
//
//    long additional = 30000;    // 30 thousand
//
//    const long total = size + additional;
//
//    long* v = new long[total];
//
//    timestamp genStart = current_time();
//
//    efficientRandomSortedList(v, size);
//
//    timestamp genEnd = current_time();
//
//    cout << "Took " << time_diff(genStart, genEnd) << " milliseconds to generate data of size " << size << "." << endl << endl;
//
//    timestamp insertStart = current_time();
//
//    for (long i = 1; i <= additional; i++) {
//        insert(v, size + i, -i);
//    }
//
//    timestamp insertEnd = current_time();
//
//    cout << "Took " << time_diff(insertStart, insertEnd) << " milliseconds to add " << additional << " more elements." << endl << endl;
//
//    timestamp searchStart = current_time();
//
//    bool found = find(v, total, 42);
//
//    timestamp searchEnd = current_time();
//
//    if (found){
//        cout << "42 appears in the list, took " << time_diff(searchStart, searchEnd) << " milliseconds to find it." << endl;
//    }
//    else {
//        cout << "42 does not appear in the list, took " << time_diff(searchStart, searchEnd) << " milliseconds to verify that." << endl;
//    }
//
//
//    delete[] v;
//
//    return 0;
//}

