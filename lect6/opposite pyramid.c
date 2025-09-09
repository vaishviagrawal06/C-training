#include <stdio.h>

int main() {
    int n=5, i, j,k,p;


    for(i = 0; i <4; i++) {
        
        for(j = 0; j <= i; j++) {
            printf(" ");
        }
        
        for(k = 3; k >i; k--) {
            printf("*");
        }
        for(p = 3; p >=i; p--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
