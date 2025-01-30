#include <stdio.h>


int main() {
    int x;
    scanf("%d",&x);
    if((x>>31) == 0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}