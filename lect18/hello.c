#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Primary diagonal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][i]);
    }

    printf("\nSecondary diagonal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][3 - 1 - i]);
    }

    return 0;
}


