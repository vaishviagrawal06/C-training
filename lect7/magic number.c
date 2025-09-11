#include <stdio.h>
int main(){

    int n,sum,temp;
    printf("enter number");
    scanf("%d",&n);
    temp=n;

    while(temp>9){
        sum =0;
        while(temp>0){
            sum = sum + temp % 10;
            temp = temp / 10;
        }
        temp = sum;
    }
    if (temp == 1)
        printf("%d is a magic number\n", n);
    else
        printf("%d not a magic number\n", n);

    return 0;
}

  