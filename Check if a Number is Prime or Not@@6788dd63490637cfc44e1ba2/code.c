#include <stdio.h>

int main() {
    int x;
    int ans;
    scanf("%d",&x);
    if(x==2){
        printf("Prime");
    }
    else {
        for(int i=2;i<x;i++){
            if (x%i==0){
                ans= 0;
                break;
            }
            else{
                ans= 1;
            }
        }
        if(ans==1){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}