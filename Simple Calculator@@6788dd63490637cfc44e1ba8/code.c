#include <stdio.h>

int main() {
    int x,y;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    switch (z){
        case '+':
        printf("%d",(x+y));
        break;
        case '-':
        printf("%d",(x-y));
        break;
        case '*':
        printf("%d",(x*y));
        break;
        case '/':
            if (y==0){printf("error");}
            else{printf("%d",x/y);}
        default:
            printf("error");
    }
    return 0;
}