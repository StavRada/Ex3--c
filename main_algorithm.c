#include <stdio.h>
#include "algorithms.h"

int main(int argc, char const *argv[]) {
        int arr[SIZE];
        int n=sizeof(arr)/sizeof(arr[0]);
        for(int i=0; i<n; i++) {
                int element;
                scanf("%d", &element);
                *(arr+i)=element;
        }
        insertion_sort(arr,n);
        for(int i=0; i<n-1; i++) {
                printf("%d,",*(arr+i));
        }
        printf("%d\n",*(arr+n-1));
        return 0;
}
