#include<stdio.h>
int sum(int *x,int *y)
{
    *x=10;
    *y=15;
    return (*x)+(*y);
}
int main()
{
    int x=10,y=12;
    printf("%d",sum(&x,&y));
    printf("\n%d",x+y);
}