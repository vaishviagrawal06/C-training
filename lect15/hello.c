#include <stdio.h>

int main()
{
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    int c[6];
    for (int i = 0; i < 3; i++)
    {
        c[i] = a[i];
        c[i + 3] = b[i];
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    
    return 0;
}
