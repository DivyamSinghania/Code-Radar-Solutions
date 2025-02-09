#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=1;j<=i;j++){printf("%d",x);}
    }
    return 0;
}