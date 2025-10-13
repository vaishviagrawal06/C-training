

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter size: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)calloc(n, sizeof(int));

    printf("enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("you entered: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}