//recursion print 5 to 1
#include<stdio.h>
void sum(int n)
{
    if(n==0)
    {
        return;
    }
    printf("%d\n",n);
    sum(n-1);
}
int main()
{
    int n =5;
    sum(n);
    return 0;
}
