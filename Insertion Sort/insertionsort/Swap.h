#ifndef Swap_h
#define Swap_h

void swap(int list[], int src, int dest){ 
    int temp = list[src];
    list[src] = list[dest];
    list[dest] = temp;
}

#endif
