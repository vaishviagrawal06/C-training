#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, -4, 5};
    int MaxSum = arr[0];  

    for (int i = 0; i < 5; i++)
    {
        int currentSum = 0;
        for (int j = i; j < 5; j++)
        {
            currentSum += arr[j];
            if (currentSum > MaxSum)
            {
                MaxSum = currentSum;
            }
        }
    }

    printf("Maximum sum is %d\n", MaxSum);
    return 0;
}

