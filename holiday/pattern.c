//pattern
/*    * * * * *
      * *   * *
      *       *    */
     
#include <stdio.h>
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n-i;j++){
            printf("* ");
        }

        for(int k=0;k<=i-1;k++)
        {
            printf("  ");
        }

        for(int k=0;k<=i-2;k++)
        {
            printf("  ");
        }
        for(int p = i; p < n - (i == 0 ? 1 : 0); p++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}