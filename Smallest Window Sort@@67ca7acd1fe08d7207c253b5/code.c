#include <stdio.h>
#include <stdlib.h>

int findUnsortedSubarray(int arr[], int n) {
    int start=-1,end=-1;
    // for (int i = 0; i < n - 1; i++) {
    //     if (arr[i] > arr[i + 1]) {
    //         start = i;
    //         break;
    //     }
    // }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]>arr[j])
            start=i;
        }
    }
    if (start==-1){
        return 0;
    }

    if(arr[start]>arr[n-1]){end=n-1;}
    else{
        for (int i = n - 1; i > 0; i--) {
            if (arr[i] < arr[i - 1]) {
                end = i;
                break;
            }
        }
    }

    return (end - start + 1);
}