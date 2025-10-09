#include<stdio.h>
#include<string.h>

int main(){
    char str[]="madam";
    int ln= strlen(str);
    int isTrue=1;
    for(int i=0;i<ln/2;i++){
        if(str[i]!=str[ln-i-1]){
            isTrue=0;
            break;
        }
        if(isTrue==1){
             printf("The string is a palindrome.\n");
        }
    else
        printf("The string is not a palindrome.\n");

     return 0;   
    }
}
