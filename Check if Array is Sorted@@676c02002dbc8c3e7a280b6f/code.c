#include <stdio.h>

int main() {
    int n,a=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            a=0;
            break;
        }
    }
    if(a==1){printf("Sorted");}
    else{printf("Not Sorted");}
    return 0;
}