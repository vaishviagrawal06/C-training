#include <stdio.h>

int main()
{
    int number = 7;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if (i == number / 2 || j - i == number / 2 || i + j == number / 2 * 3)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}