#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                arr[j]=arr[j]^arr[i];
                arr[i]=arr[j]^arr[i];
                arr[j]=arr[j]^arr[i];
            }
        }
    }
    for(int i=0;i<n-1;i++){
        int next=arr[i]+1;
        if(next!=arr[i+1])
            break;
    }
    printf("%d",next);
}