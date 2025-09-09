#include <stdio.h>

int main() {
   int num = 0;
    int n=5, i, j, space;
     for(i = 0; i < n; i++) {
        
        for(j = 0; j < n - i; j++) {
            printf("  ");
        }
        
        for(int k = 0; k< 2 * i - 1; k++) {
            printf("%c ",num++);
        }
        printf("\n");
    }

    return 0;
}


