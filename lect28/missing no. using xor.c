//find the missing no. [1,2,4,5] using xor find missing no. 3
#include<stdio.h>
int main()
{
    int arr []= {1,2,4,5};
    int n = 4;
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n;i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    for(int i=1;i<=n+1;i++)
    {
        xor2 = xor2 ^ i;
    }
    printf("%d",xor1 ^ xor2);
    return 0;
}