#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int x=5,y=10,sum;
    sum = add(x,y);
    printf("sum of two number is %d \n",sum);
    return 0;
    
}