#include <stdio.h>

int main() {
    int n, i, j = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    i = n; 

    while (n!= 0) {
        remainder = n % 10; 
        j = j * 10 + remainder; 
        n=n/10;
    }

   
    if (i == j) {
        printf("%d is a palindrome number.\n", i);
    } else {
        printf("%d is not a palindrome number.\n", i);
    }

    return 0;
}