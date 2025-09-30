#include <stdio.h>
int main()
{
    int n=5;
    
    int mid = (n - 1) / 2;
    int last = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < 2 * n - 1; a++) 
        {
            if (a == i || a == (2 * n - 2 - i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("  ");
        for (int j = 0; j < 3; j++)
        {
            if (i==0 || i == mid || (i<mid  && j == 0)|| (i>mid && j==0) || (i<mid && j==2)||(i>mid && j==2) )
            {
                printf("* ");
            }
           
            else
            {
                printf("  ");
            }
           
        }
        printf("  ");
        
        for (int k = 0; k < 3; k++)
        {
            if (i==0 || i == mid ||i == last || (i<mid  && k == 1)|| (i>mid && k==1))
            {
                printf("* ");
            }
           
            else
            {
                printf("  ");
            }
           
        }
        printf("  ");

        for (int l = 0; l < 3; l++)
        {
            if (i==0 || i == mid ||i == last || (i<mid  && l == 0)|| (i>mid && l==2))
            {
                printf("* ");
            }
           
            else
            {
                printf("  ");
            }
           
        }
        printf("  ");

        for (int m = 0; m < 3; m++)
        {
            if ( i == mid || (i<mid  && m == 0)|| (i>mid  && m == 0)||(i>mid && m==2)||(i<mid && m==2))
            {
                printf("* ");
            }
           
            else
            {
                printf("  ");
            }
           
        }
        printf("  ");

        for (int v = 0; v < 2 * n - 1; v++) // make it wider
        {
            if (v == i || v == (2 * n - 2 - i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("  ");

        for (int p = 0; p < 3; p++)
        {
            if (i==0 || i == mid ||i == last || (i<mid  && p == 1)|| (i>mid && p==1))
            {
                printf("* ");
            }
           
            else
            {
                printf("  ");
            }
           
        }
        printf("  ");
        printf("\n");

    }
    return 0;
}