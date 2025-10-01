#include <stdio.h>
int main()
{
    int n = 7;
    int mid = (n - 1) / 2;
    int last = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == mid || j == mid || i == mid - 1 && j == 1 || i == mid + 1 && j == 1 ||
                i == mid - 1 && j == last - 1 || i == mid + 1 && j == last - 1 ||
                i == 1 && j == mid - 1 || i == 1 && j == mid + 1 ||
                i == last - 1 && j == mid - 1 || i == last - 1 && j == mid + 1)
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
