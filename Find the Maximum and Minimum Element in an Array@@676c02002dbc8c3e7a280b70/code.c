#include <stdio.h>

int main() {
    itn x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){scanf("%d",&arr[i]);}
    int max=arr[0],min=arr[0]
    for(int i=0;i<x-1;i++){
        if(arr[i]>arr[i+1]){min=arr[i+1];}
        if(arr[i]<arr[i+1]){max=arr[i+1];}
    }
    printf("%d %d",min,max);
    return 0;
}