#include<stdio.h>
int sum(int x,int y)
{
    x=2,y=2;
    return x+y;
}
int main()
{
    int x=10,y=20;
    printf("%d",sum(x,y));
    printf("\n%d",x+y);
}