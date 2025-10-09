#include <stdio.h>
#include <string.h>

int main() {
    char str[]="vaishvi";
    int freq[256] = {0}; 
    int i, max = 0;
    char result;
 
    for (i = 0;str[i]!='\0'; i++) {
        freq[str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }
    printf("%c occurs maximum time %d",result,max);
    return 0;
}
