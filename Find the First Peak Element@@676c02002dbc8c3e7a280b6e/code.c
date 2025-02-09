#include <stdio.h>

int main() {
    int x,a=0;
    scanf("%d",&x);
    int arr[i];
    for(int i=0;i<x;i++){scanf("%d",&arr[i]);}
    if(arr[0]>arr[1]){printf("%d",arr[0]);}
    else{
        for(int i=1;i<x-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                printf("%d",arr[i]);
                a=0;
                break;
            }
            else{a=1;}
        }
        if(a==1){
            if(arr[x-1]>arr[x-2]){printf("%d",arr[x-1]);}
        }
    }
    return 0;
}