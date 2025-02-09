#include <stdio.h>

int bubbleSort(int arr[],int n){
    for (int i=0;i<(n-1);i++) {
        for (int j=0;j<(n-i-1);j++) {
            if(arr[j]>arr[j+1]){
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }
    return 0;
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){printf("%d ",arr[i]);}
    return 0;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    if(n==1){printf("1");}
    else if(n)
    else{
        bubbleSort(arr,n);
        printArray(arr,n);
    }
    return 0;
}