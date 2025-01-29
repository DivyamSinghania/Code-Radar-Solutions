#include <stdio.h>

int main() {
    int x,y,a;
    scanf("%d %d",&x,&y);
    a=1 << y;
    printf("%d",(x^a));
    return 0;
}