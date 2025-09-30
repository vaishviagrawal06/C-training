#include<stdio.h>
int swap(int *a, int *b){
    int t;
    t = *a;
    *a =*b;
    *b = t;
}
int main(){
    int a =5;
    int b=10;
    printf("before swapping a = %d b = %d \n",a,b);
     swap(&a,&b);
    printf("after swapping a = %d b = %d",a,b);
    return 0;
}