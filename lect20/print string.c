#include<stdio.h>
#include<string.h>

int main(){
    char str[]="hii";
    char newStr[10];
    int ln = strlen(str);
    for(int i=0;str[i]!='\0';i++){
        newStr[i]=str[i];

    }
    printf("%s",newStr);
}