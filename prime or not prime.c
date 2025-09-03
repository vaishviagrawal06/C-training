#include <stdio.h>

int main() {
    int n=7;
    int i;
    if(n<=1){
        printf("not prime");
    }else{
        printf("prime");
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("not prime");
        }
    }
    return 0;
}