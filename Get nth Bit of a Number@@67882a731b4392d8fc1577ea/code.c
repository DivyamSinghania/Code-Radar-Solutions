#include <stdio.h>

int main() {
    int x,y,a,b;
    scanf("%d %d",&x,&y);
    a=x>>y;
    b=1;
    if((a|b)>a){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}