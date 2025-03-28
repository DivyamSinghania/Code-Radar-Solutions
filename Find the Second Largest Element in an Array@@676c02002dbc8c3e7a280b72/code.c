#include <stdio.h>
#include <stdlib.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     if(n<=1){
//         printf("-1");
//     }
//     else{
//         int max=arr[0];
//         int sec=arr[1];
//         for(int i=1;i<n;i++){
//             if(max<arr[i]){
//                 sec=max;
//                 max=arr[i];
//             }
//         }
//         if(sec==max){printf("-1");}
//         else
//             printf("%d",sec);
//     }
//  return 0;
// }

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<=1){
        printf("-1");
    }
    else{
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    arr[i]=arr[i]^arr[j];
                    arr[j]=arr[i]^arr[j];
                    arr[i]=arr[i]^arr[j];
                }
            }
        }
        int max=arr[n-1];
        int sec=arr[n-2];
        if(sec==max){printf("-1");}
        else
            printf("%d",sec);
    }
    return 0;
}