#include <stdio.h>

int main() {
    int x,y=1,a=1;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){scanf("%d",&arr[i]);}
    if(arr[0]>arr[1]){printf("%d",arr[0]);}
    else{
        for(int i=1;i<x-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                printf("%d",arr[i]);
                a=0;
                break;
            }
        }
        if(a==1){
            if(arr[x-1]>arr[x-2]){
                printf("%d",arr[x-1]);
                y=0;}
        }
        if(y==1){printf("-1");}
    }
    return 0;
}