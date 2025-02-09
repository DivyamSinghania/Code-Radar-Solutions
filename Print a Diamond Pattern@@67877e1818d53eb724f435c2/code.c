#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int k=x;k>i;k--){printf(" ");}
        for(int j=0;j<(i*2-1);j++){printf("*");}
        printf("\n");
    }
    for(int a=(x-1);a>0;a--){
        for(int b=a;b<x;b++){printf(" ");}
        for(int c=(a*2-1);c>0;c--){printf("*");}
        printf("\n");
    }
    return 0;
}