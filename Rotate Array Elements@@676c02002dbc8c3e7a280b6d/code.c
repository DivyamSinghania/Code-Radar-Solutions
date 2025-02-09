#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    scanf("%d",&x);
    int *arr = (int *)malloc(x * sizeof(int)); 
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&y);
    for(int j=0;j<y;j++){
        int a = arr[x-1];
            for (int k=x-1;k>0;k++) {
                arr[k]=arr[k-1];
            }
            arr[0]=a;
    }
    for(int i=0;i<x;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}