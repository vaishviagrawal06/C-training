#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for(int k=0;k<i;k++)
        {
            printf("  ");
        }
        for(int j=i;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

