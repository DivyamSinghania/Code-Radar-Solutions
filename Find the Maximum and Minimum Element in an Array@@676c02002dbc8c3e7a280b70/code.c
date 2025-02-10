#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){scanf("%d",&arr[i]);}
    int max=arr[0],min=arr[0];
    for(int i=0;i<x-1;i++){
        if(min>arr[i+1]){min=arr[i+1];}
        if(max<arr[i+1]){max=arr[i+1];}
    }
    printf("%d %d",min,max);
    return 0;
}