#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2==0){printf("1 ");}
                else{printf("0 ");}
            }
            else{
                if(j%2==0){printf("0 ");}
                else{printf("1 ");}
            }
        printf("\n");
    }
    return 0;
}