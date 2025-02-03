#include <stdio.h>
#include <ctype.h>

int main() {
    char x,a;
    scanf("%c",&x);
    if(isaplha(x)){
        a= toupper(x);
        if(a=="a" || a=="e" || a=="i" || a=="o" || a=="u"){printf("Vowel");}
        else{printf("Consonent");}
    }
    else if(isdigit(x)){printf("Digit");}
    else(printf("Special Character");)
    return 0;
}