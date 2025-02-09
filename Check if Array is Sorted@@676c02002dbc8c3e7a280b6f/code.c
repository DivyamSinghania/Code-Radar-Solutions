#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x-1;i++){
        int a=1;
        if(arr[i]>arr[i+1]){
            a=0;
            break;
        }
    }
    if(a==1){printf("Sorted");}
    else{printf("Not Sorted");}
    return 0;
}