#include<stdio.h>
int swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a=5;
    int b=10;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}