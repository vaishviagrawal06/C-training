#include <stdio.h>
int main(){
    int  num = 121;
    int org = num;
    int res =0;
    while(num!=0){
        int lastdigit =num % 10;
        res =res*10 + lastdigit;
       num = num/10;

    }
    printf("reverse of number is %d",res);


    return 0;
}