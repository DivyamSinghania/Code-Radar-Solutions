#include <stdio.h>

int main() {
    int x;
    char ans[100];
    scanf("%d",&x);
    if(x==2){
        printf("Prime");
    }
    else {
        for(int i=2;i<x;i++){
            if (x%i==0){
                ans= "Prime";
            }
            else{
                ans= "Not Prime";
            }
        }
        printf("%s",ans);
    }
    return 0;
}