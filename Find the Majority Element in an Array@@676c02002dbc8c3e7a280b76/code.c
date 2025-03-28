// Your code here...#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    
    if(n<=1){
        printf("-1");
    }
    else{
        for(int i=0;i<n-1;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    freq[j]=0;
                }
            }
            if(freq[i]>=(n/2)){
                printf("%d",arr[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}