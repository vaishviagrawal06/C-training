#include <stdio.h>
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int n = 3;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[0][i]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        printf("%d ", arr[i][n - i - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[n - 1][i]);
    }

    return 0;
}
