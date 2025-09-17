#include <stdio.h>

int main() {
    int arr[] = {-10,20,30,-40,50};
    int n = 5;

    int max1 = arr[0];
    int max2 = arr[1];

    if(max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for(int i = 2; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2) {
            max2 = arr[i];
        }
    }

    int maxSum = max1 + max2;
    printf("Maximum sum of two elements is: %d\n", maxSum);

    return 0;
}
