// remove a character from string and check whether it is pallindrome or not "abca" -> "aca" -> pallindrome
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    int flag = 0;

    for(int i = 0; i < len; i++) {
        char temp[100];
        int index = 0;
        for(int j = 0; j < len; j++) {
            if(j != i) {
                temp[index++] = str[j];
            }
        }
        temp[index] = '\0';

        // Check if temp is palindrome
        int isPalindrome = 1;
        for(int k = 0; k < index / 2; k++) {
            if(temp[k] != temp[index - k - 1]) {
                isPalindrome = 0;
                break;
            }
        }

        if(isPalindrome) {
            printf("By removing character '%c' at index %d, the string becomes palindrome: %s\n", str[i], i, temp);
            flag = 1;
            break;
        }
    }

    if(!flag) {
        printf("No single character removal can make the string a palindrome.\n");
    }

    return 0;                     
}