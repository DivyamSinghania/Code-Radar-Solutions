#include <stdio.h>
#include <stdlib.h>

int subarray(int arr[],int n){
    for(int i=0;i<n-1;i++){
            if (arr[i]<arr[i+1]){
                int ans= n-1-i;
            }
        }
    printf("%d",ans);
    return 0;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%d\n",subarray(arr,n));
    }
    return 0;
}