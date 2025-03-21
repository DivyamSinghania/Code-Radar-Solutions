// Your code here...
#include <stdio.h>

int main (){
    int n,arr[10000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for (int i=0;i<n;i++){
        if (max<arr[i])
            max=arr[i];
    }
    printf("%d \n",max);
    for(int i=1;i<=max;i++){
        int small;
        for(int j=0;j<n-1;j++){
            if(i==arr[j]){
                small=0;
                break;
            }
            else{
                small=1;
            }
            printf("%d",small);
            printf("%d\n",i);
        }
        if(small==1)
            printf("%d",i);
            break;
    }

}