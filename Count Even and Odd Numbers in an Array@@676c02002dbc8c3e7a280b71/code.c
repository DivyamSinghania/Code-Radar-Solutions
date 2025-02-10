#include <stdio.h>

int main() {
    int x,c1=0,c2=0;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){scanf("%d",&arr[i]);}
    for(int i=0;i<x;i++){
        if(arr[i]%2==0){c1++;}
        else{c2++;}
    }
    printf("%d %d",c1,c2);
    return 0;
}