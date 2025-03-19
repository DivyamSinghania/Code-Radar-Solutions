#include <stdio.h>
#include <stdlib.h>

int findUnsortedSubarray(int arr[],int n){
    int ans;
    for(int i=0;i<n-1;i++){
            if (arr[i]<arr[i+1]){
                ans= n-1-i;
                printf("%d",ans);
                break;
            }
        }
    printf("%d",ans);
    return 0;
}
