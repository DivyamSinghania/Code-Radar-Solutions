#include <stdio.h>
#include <stdlib.h>

int findUnsortedSubarray(int arr[],int n){
    // int ans;
    for(int i=0;i<n-1;i++){
            if (arr[i]<arr[i+1]){
                int ans= n-1-i;
                break;
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
        printf("%d\n",findUnsortedSubarray(arr,n));
    }
    return 0;
}