#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=i;j<=(i+i);j++){printf("%d ",j);}
        printf("\n");
    }
    return 0;
}