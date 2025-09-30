#include <stdio.h>
int main()
{
    int n=5;
    
    int mid = (n - 1) / 2;
    int last = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == mid || j == mid||(i<mid && j==0)||(i==0 && j>mid) || (i==last && j<mid) ||(i>mid && j==last))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}