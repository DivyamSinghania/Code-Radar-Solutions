#include <stdio.h>

int main() {
    int x,y,a;
    scanf("%d",&x);
    y=1;
    a=x|y;
    if(a>x){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}