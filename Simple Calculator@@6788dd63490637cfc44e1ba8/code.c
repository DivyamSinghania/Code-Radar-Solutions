#include <stdio.h>

int main() {
    int x,y;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    switch (z){
        case '+':
        printf("%f",(x+y));
        case '-':
        printf("%f",(x-y));
        case '*':
        printf("%f",(x*y));
        case '/':
        printf("%f",(x/y));
        default:
        printf("error");
    }
    return 0;
}