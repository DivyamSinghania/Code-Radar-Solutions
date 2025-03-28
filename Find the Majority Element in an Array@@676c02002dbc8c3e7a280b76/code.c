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
        printf("%d",arr[0]);
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
            if(freq[i]!=0){
                freq[i]=count;
            }
        }
        int k=0;
        for(int i=0;i<n;i++){
            if(freq[i]>(n/2)){
                k=0;
                printf("%d",arr[i]);
                break;
            }
            else{k=-1;}
        }
        if(k==-1){printf("-1");}
    }

}