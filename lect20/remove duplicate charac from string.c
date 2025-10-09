#include <stdio.h>
#include <string.h>

int main() {
    char str[]="mannnkm";
    int count = 0;

    int ln = strlen(str);

    for (int i = 0; i < ln-1; i++) {
        for (int j = i + 1; j < ln; j++) {
            if (str[i] == str[j]) {
             
                for(int k=j;k<ln;k++){
                    str[k]=str[k+1];
                }
                i++;
                j--;
                }
            }
        }
        printf("string after removing duplicate charac. %s\n",str);
        return 0;
    }

    