#include <stdio.h>

int main() {
    int x,y,a;
    scanf("%d %d",&x,&y);
    a=1<<y;
    if((x|a)==x){
        printf("%d",(x^a));
    }
    else{
        printf("%d",x);
    }
    return 0;
}