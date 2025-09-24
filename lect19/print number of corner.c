#include <stdio.h>
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        }
    }
    int left = 0, right = 2;
    int top = 0, bottom = 2;
    while (left < right && top < bottom)   
{
    for (int i = left; i <= right; i++) {
        printf("%d ", arr[top][i]);
    }
    top++;

    for (int i = top; i <= bottom; i++) {
        printf("%d ", arr[i][right]);
    }
    right--;

    if (top <= bottom) {
        for (int i = right; i >= left; i--) {
            printf("%d ", arr[bottom][i]);
        }
        bottom--;
    }

    if (left <= right) {
        for (int i = bottom; i >= top; i--) {
            printf("%d ", arr[i][left]);
        }
        left++;
    }
}
return 0;
}
