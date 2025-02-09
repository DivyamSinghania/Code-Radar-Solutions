#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x-1;i++){
        int *a="Sorted";
        if(arr[i]>arr[i+1]){
            a="Not Sorted";
            break;
        }
    }
    printf("%s",a);
    return 0;
}