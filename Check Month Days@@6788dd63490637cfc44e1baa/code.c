#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if (x<=7){
        if (x==2){printf("28");}
        else if (x%2==0){printf("30");}
        else{printf("31");}
    }
    else{
        if (x%2==0){printf("31");}
        else{printf("30");}
    }
    return 0;
}