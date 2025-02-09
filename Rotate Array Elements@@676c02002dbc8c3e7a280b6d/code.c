#include <stdio.h>

int main() {
    int x,y;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&y);
    for(int j=0;j<y;j++){
        int a = arr[x-1];
            for (int j=n-1;j>0;j++) {
                arr[j]=arr[j-1];
            }
            arr[0]=a;
    }
    for(int i=0;i<x;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}