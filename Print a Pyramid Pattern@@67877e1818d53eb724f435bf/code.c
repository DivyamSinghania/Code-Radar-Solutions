#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=0;j<(i*2-1);j=j+(j*2-1)){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}