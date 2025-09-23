#include <stdio.h>
int main() {
    int arr[3][3] = {{6, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int min = arr[0][0]; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    printf("Minimum element = %d\n", min);

    return 0;
}


