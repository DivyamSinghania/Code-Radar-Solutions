#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int sec=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            sec=max;
            max=arr[i];
        }
    }
    printf("%d",sec);
}