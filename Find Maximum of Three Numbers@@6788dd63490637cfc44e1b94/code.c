#include <stdio.h>

int main() {
    int x,y,z;
    scnaf("%d %df %d",&x,&y,&z);
    if(x>=y && x>=z){
        printf("%d",x);
    }
    else if(y>=x && y>=z){
        printf("%d",y);
    }
    else{
        printf("%d",z);
    }
    return 0;
}