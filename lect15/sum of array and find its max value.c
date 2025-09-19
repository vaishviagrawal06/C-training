
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i=0; i < n; i++) {
        scanf("%d", &arr[i]);

    }
    int sum =0;
    int max = arr[0];
    for(i=0; i < n; i++) {
        sum += arr[i];
        if(arr[i] > max) {
            max = arr[i];
        }

    }
    printf("Sum of array = %d\n", sum);
    printf("Maximum value = %d\n", max);
    
    return 0;
}

