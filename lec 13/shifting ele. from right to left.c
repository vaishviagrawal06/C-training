#include <stdio.h>

int main() {
    int n = 5;
    int arr[5] = {10, 20, 30, 40, 50};
    int first = arr[0];

  
    for(int i = 0; i < 4; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first; 
    printf("after array shifted\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}











 

