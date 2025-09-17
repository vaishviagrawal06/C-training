#include <stdio.h>

int main() {
    int n = 3;
    int a[3][3] = {0};
    int i = 0, j = 1;
    
    for(int num = 1; num <= n*n; num++) {
        a[i][j] = num;

        if (i == 0 && j != 2) {
            i = i + 2;
            j = j + 1;
        }
        else if (i == 0 && j == 2) {
            i = i + 1;
            j = j - 2;
        }
        else if (j == 2 && i != 0) {
            i = i - 1;
            j = j - 2;
        }
        else if (i != 0 && j == 0) {
            if (a[i-1][j+1] != 0) {
                i = i + 1;
            } else {
                i = i - 1;
                j = j + 1;
            }
        }
    }
    
   
    for(int x = 0; x < n; x++) {
        for(int y = 0; y < n; y++) {
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }

    return 0;
}