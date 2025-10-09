#include <stdio.h>
#include <string.h>

int main() {
    char str[]="C Programming", result[100];
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {  
            result[j++] = str[i];
        }
    }
    result[j]='\0';
   

    printf(" %s", result);
    return 0;
}



















