#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(isalpha(a)){
        if(isupper(a)){
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