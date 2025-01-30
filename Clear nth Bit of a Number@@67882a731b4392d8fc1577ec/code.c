#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x & (1<<y)){
        printf("%d",(x^(1<<y)));
    }
    else{
        printf("%d",x);
    }
    return 0;
}