#include "algorithms.h"

//int * arr == int arr[]
// *(arr+5) == arr[5]
//
void shift_element(int * arr, int i){
//{1,1,2,3,4,6,7,8}
//
        while(i>0) {
          //arr[i]=arr[i-1];
          *(arr+i)=*(arr+i-1);
          i--;
        }
}
//https://www.geeksforgeeks.org/insertion-sort/
void insertion_sort(int* arr, int len){
  int i, key, j;
    for (i = 1; i < len; i++)
    {
        key = *(arr+i);
        j = i - 1;
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && *(arr+j) > key)
        {
            *(arr+j+1) = *(arr+j);
            j = j - 1;
        }
        *(arr+j+1) = key;
    }
}
