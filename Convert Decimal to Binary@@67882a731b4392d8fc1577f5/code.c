#include <stdio.h>

int main() {
    int n,x,i=0;
    scanf("%d",&n);
    if(n%2==0){x=n;}
    else{x=n-1;}
    for(;x%2==0;x=x/2){
        i++
    }
    printf("%d",(1<<i));
    if(n%2!=0){printf("1");}
    return 0;
}