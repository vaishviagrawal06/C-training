#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isPalindrome = 1; 

    for(int i =0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]){
            isPalindrome = 0; 
            break;
        }
    }

    if(isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
