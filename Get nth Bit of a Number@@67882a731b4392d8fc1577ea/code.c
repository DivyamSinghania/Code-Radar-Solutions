#include <stdio.h>

int main() {
    int x,y,a;
    scanf("%d %d",&x,&y);
    a=x>>y;
    if(a==0){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}