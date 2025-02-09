#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=i;j>0;j--){printf("%c ",('A'+j));}
        printf("\n");
    }
    return 0;
}