#include <stdio.h>

int isPrime(int num){
    int x;
    if(num==2){x=1;}
    else{
        for(let i=2;i<num;i++){
            if(num%i==0){
                x=0;
                break;}
            else{x=1;}
        }
    }
    return x;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}