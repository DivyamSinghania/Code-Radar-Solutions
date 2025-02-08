#include <stdio.h>

int main() {
    int x,y;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    switch (z){
        case '+':
        printf("%d",(x+y));
        case '-':
        printf("%d",(x-y));
        case '*':
        printf("%d",(x*y));
        case '/':
        printf("%d",(x/y));
        default:
        printf("error");
    }
    return 0;
}