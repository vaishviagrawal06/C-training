#include <stdio.h>
int main()
{
    int n=5;
    
    int mid = (n - 1) / 2;
    int last = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < n; a++) 
        {
            if (a==0||a==last||i==a)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
         printf("  ");

        for (int d = 0; d < 3; d++) 
        {
            if (d==0||i==0 && d==1 || i==last && d ==1 || i==1 && d==2 || i==2 && d==2 || i==3 && d==2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("   ");

        for (int l = 0; l < 3; l++)
        {
            if (i==0||i== mid || i == last || (i<mid  && l == 0)|| (i>mid && l==2))
            {
                printf("* ");
            }
           
            else
            {
                printf("  ");
            }
           
        }
        printf("  ");

        for (int p = 0; p < 3; p++)
        {
            if (i==0 ||i == last || p==mid-1)
            {
                printf("* ");
            }
           
            else
            {
                printf("  ");
            }
           
        }
        printf("  ");

        for (int r = 0; r < 3; r++)
        {
            if (i==0 ||i == mid|| r==0 ||i==last && r==2 || i<mid && r==2 || i==mid+1 && r==1)
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