//recursion sum 
#include<stdio.h>
int sum(int a)
{
    if(a==0)
    {
        return 0;
    }
    return a+sum(a-1);

}
int main()
{
    int n = 5;
    int result = sum(n);
    printf("Sum is %d\n",result);
    return 0;
}
