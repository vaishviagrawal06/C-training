#include <stdio.h>
int main()
{
    int n=5;
    
    int mid = (n - 1) / 2;
    int last = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == mid || j == 0|| (i<mid && j==2)||(i>mid && j==2) )
            {
                printf("* ");
            }
           
            else
            {
                printf("  ");
            }
           
        }
        printf("  ");

         for(int k=0;k<3;k++)
            {
                if(i==0 ||  i ==mid ||i==last || i<mid && k==0 || i>mid && k==0)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("  ");
            for(int l=0;l<3;l++)
            {
                if(i==last || i<mid && l==0 || i>=mid && l==0)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("  ");

            for(int m=0;m<3;m++)
            {
                if(i==last || i<mid && m==0 || i>=mid && m==0)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("  ");
            for(int n=0;n<3;n++)
            {
                if(i==0 || i==last || i<=last &&  n==0 || i<=last && n==2)
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