#include <stdio.h>
#include <ctype.h>

int main() {
    char x,a;
    scanf("%c",&x);
    if(isaplha(x)){
        // a= tolower(x);
        if(x=="a" || x=="e" || x=="i" || x=="o" || x=="u"){printf("Vowel");}
        else{printf("Consonent");}
    }
    else if(isdigit(x)){printf("Digit");}
    else(printf("Special Character");)
    return 0;
}