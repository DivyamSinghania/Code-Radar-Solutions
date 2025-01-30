#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<=31;i++){
        if(x & (1<<i)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}