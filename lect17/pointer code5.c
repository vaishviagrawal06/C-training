#include<stdio.h>
int main()
{
    int a[5]={1,2,3,45,6};
    int *p=a;
    for(int i=4;i>=0;i--)
    {
        printf("\n%d",*(p+i));
    }
}