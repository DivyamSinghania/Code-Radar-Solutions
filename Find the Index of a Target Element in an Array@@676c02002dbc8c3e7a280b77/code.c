#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    
    int a=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("%d",i);
            a=0;
            break;
        }
    }
    if(a==-1){printf("-1");}
    return 0;
}