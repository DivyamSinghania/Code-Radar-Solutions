// Your code here...#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    if(n<=1){
        printf("-1");
    }
    else{
        for(int k=0;k<x;k++){
            int last=arr[n-1];
            for(int i=n-1;i>0;i--){
                arr[i]=arr[i-1];
            }
            arr[0]=last;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}