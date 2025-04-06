#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];
    int length[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        length[i]=-1;
    }
    for(int i=0;i<n;i++){
        int count=0;
        while(arr[i]){
            count++;
            arr[i]=arr[i]/10;
        }
        length[i]=count;
    }
    max=length[0];
    for(int i=1;i<n;i++){
        if(length[i]>max)
            max=length[i];
    }
    printf("%d",max);
}