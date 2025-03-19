#include <stdio.h>
#include <stdlib.h>

int findUnsortedSubarray(int arr[], int n) {
    int start=0,end=0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }
    if (start==0){
        return 0;
    }


    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    return (end - start + 1);
}