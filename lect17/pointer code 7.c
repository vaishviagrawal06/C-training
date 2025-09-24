#include<stdio.h>
int swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    int a=5,b=10;
    swap(&a,&b);
    printf("a = %d  b = %d",a,b);
}
