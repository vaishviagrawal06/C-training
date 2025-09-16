#include <stdio.h>

int main() {
   int arr[2] ;
    printf("Enter 2 elements:\n");
    for(int i = 0; i < 2; i++) {
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1]) {
        printf("arr[0] is greater\n");
    } else if(arr[0] < arr[1]) {
        printf("arr[1] is greater\n");
    } else {
        printf("Both elements are equal\n");
    }











   

    return 0;
}
