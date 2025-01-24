#include <stdio.h>

int main() {
    char a[100],c[100];
    int b;
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %s \nAge: %d \nHobby: %s",a,b,c);
    return 0;
}