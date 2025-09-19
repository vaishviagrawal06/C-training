#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, -4, 5};
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < 5; i++)
    {
  
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

       
        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    printf("Maximum sum is %d\n", maxSum);
    return 0;
}
