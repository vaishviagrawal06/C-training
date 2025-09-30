#include <stdio.h>
int avg(int a, int b, int c, int d, int e)
{
    return (a + b + c + d + e) / 5;
}
int main()
{
    int n1, n2, n3, n4, n5, average;
    printf("enter 5 elements");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    average = avg(n1, n2, n3, n4, n5);
    printf("avg of 5 number is %d \n", average);
    return 0;
}