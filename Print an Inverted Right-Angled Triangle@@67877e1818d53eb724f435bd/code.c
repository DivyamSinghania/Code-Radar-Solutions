#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=x;i<0;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}