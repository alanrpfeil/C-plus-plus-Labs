#ifndef InsertLookup_h
#define InsertLookup_h

bool find(long* list, long size, long value){
   for (long i = 0; i < size; i++) {
       if (list[i] == value){
           return true;
       }
   }

   return false;
}

void insertion_sort(long list[], long size){
   long n = size;
   for (long i = 1; i < n; i++) {
       long j = i;
       while (j > 0 && list[j-1] > list[j]){
           long temp = list[j];
           list[j] = list[j-1];
           list[j-1] = temp;
           j = j - 1;
       }
   }
}

void insert(long* list, long size, long value){
   list[size-1] = value;
   insertion_sort(list, size);
}

#endif
