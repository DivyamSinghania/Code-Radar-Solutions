#include <stdio.h>

int isPrime(int num){
    int x=1;
    if(num<2){x=0;}
    else if(num==2){x=1;}
    else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                x=0;
                break;}
            else{x=1;}
        }
    }
    return x;
}
