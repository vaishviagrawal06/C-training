#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "acdkksca";
    int ln = strlen(str);
    int count;

    printf("Compressed string: ");

    for (int i = 0; i < ln; i++) {
        count = 1;

        for (int j = i + 1; j < ln; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j]='\0';
                
            }
        }

        if (str[i] != '\0') {
            printf("%c%d", str[i], count);
        }
    }

    return 0;
}

