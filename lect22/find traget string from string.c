#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abcdfs";
    char target[] = "acd";
    int i,j;

    int len1 = strlen(str);
    int len2 = strlen(target);

    int found = 0;

    for (i = 0; i <= len1 - len2; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (str[i + j] != target[j])
            {
                break;
            }
        }

        if (j == len2)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("True");
    else
        printf("False");

    return 0;
}
