#include <stdio.h>
#include <string.h>

int main() {
    char str[]="acdksa";
    int freq[256] = {0};
    int ln = strlen(str);


    for(int i = 0; i < ln; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("\nNon-repeating: ");
    for(int i = 0; i < ln; i++) {
        if(freq[(unsigned char)str[i]] == 1)
            printf("%c ", str[i]);
    }

    return 0;
}
