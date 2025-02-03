#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(isalpha(a)==1){
        if(isupper(a)==1){
            printf("Uppercase");
        }
        else{
            printf("Lowercase");
        }
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}