// Your code here...
#include <stdio.h>

int main (){
    int n,arr[10000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int count=0;
    for (int i=0;i<n;i++){
        if (arr[i]>0)
            sum+=arr[i];
    }
    printf("%d \n",sum);
    int max=arr[0];
    for (int i=0;i<n;i++){
        if (max<arr[i])
            max=arr[i];
    }
    for(int i=1;i<=max;i++)
        count+=i;
    printf("%d \n",count);
    if(count==sum){printf("%d",(max+1));}
    else{printf("%d",(count-sum));}
}