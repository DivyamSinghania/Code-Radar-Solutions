#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int k=x;k>i;k--){printf(" ");}
        for(int j=1;j<=i;j++){printf("%d",j);}
        if(i>1){
            for(int j=i;j>0;j--){printf("%d",j);}
        }
        printf("\n");
    }
    return 0;
}