#include <stdio.h>
int isEven(int n) {
    if(n % 2 == 0) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Enter a n: ");
    scanf("%d", &n);

    if(isEven(n)) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }

    return 0;
}

    