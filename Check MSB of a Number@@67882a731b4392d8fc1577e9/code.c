#include <stdio.h>


int main() {
    int x,a;
    scanf("%d",&x);
    a=x>>31;
    if(a==0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}