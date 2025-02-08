#include <stdio.h>

int main() {
    int x;
    int a= x*2-1
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=0;j<(i*2-1);j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}