//recursion check whether a series is pallindrome or not
#include <stdio.h>
int pallindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1; // Base case: If the start index is greater than or equal to end, it's a palindrome
    }
    if (str[start] != str[end]) {
        return 0; // Characters at start and end do not match
    }
    return pallindrome(str, start + 1, end - 1); // Recursive call
}
