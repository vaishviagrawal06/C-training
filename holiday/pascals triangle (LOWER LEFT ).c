#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        int val=1;
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
          printf("%d ",val);
          val = val*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}