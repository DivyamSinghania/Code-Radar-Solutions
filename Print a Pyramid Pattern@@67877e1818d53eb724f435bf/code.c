#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int k=x;k>i;k--){printf(" ");}
        for(int j=0;j<(i*2-1);j++){printf("*");}
        printf("\n");
    }
    return 0;
}