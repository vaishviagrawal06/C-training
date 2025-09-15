#include<stdio.h>
int main(){
    int a[5] = {5, 4, 3, 2, 1};
    int sum =0;
    for(int i = 0; i < 5; i++) {
        sum+=a[i];
    }
    printf("sum = %d\n", sum);
    return 0;
}