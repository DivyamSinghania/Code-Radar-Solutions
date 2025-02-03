#include <stdio.h>
#include <ctype.h>
int main() {
    char x;
    scanf("%c",&x);
    if(isaplha(x)){
        char a= tolower(x);
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){ printf("Vowel"); }
        else{ printf("Consonant"); }
    }
    else if(isdigit(x)){ printf("Digit"); }
    else{ printf("Special Character"); }
    return 0;
}