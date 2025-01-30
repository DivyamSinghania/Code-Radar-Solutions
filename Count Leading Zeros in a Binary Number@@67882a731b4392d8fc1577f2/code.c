#include <stdio.h>

int main() {
    int x,a;
    scanf("%d",&x);
    for(int i=0;i<=31;i++){
        if(x & (1<<i)){
            a=i;
        }
    }
    printf("%d",(32-a));
    return 0;
}