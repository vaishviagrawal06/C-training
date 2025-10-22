// trapping rain water(LEETCODE 42.question)
// Input: height = [4,2,0,3,2,5]
// Output: 9
#include <stdio.h>
int main()
{
  int n = 6;
  int height[6] = {4, 2, 0, 3, 2, 5};
  int leftmax[6];
  int rightmax[6];

  leftmax[0] = height[0];
  for (int i = 1; i < n; i++)
  {
    if (height[i] > leftmax[i - 1])
    {
      leftmax[i] = height[i];
    }
    else
    {
      leftmax[i] = leftmax[i - 1];
    }
  }
  rightmax[n-1] = height[n-1];
  for (int i = n - 2; i >= 0; i--)
  {
    if (height[i] > rightmax[i + 1])
    {
      rightmax[i] = height[i];
    }
    else
    {
      rightmax[i] = rightmax[i + 1];
    }
}
int water = 0;
for (int i = 0; i < n; i++)
{
  if (leftmax[i] < rightmax[i])
  {
    water = water + leftmax[i] - height[i];
  }
  else
  {
    water = water + rightmax[i] - height[i];
  }
}
printf("total water trapped is %d\n", water);
return 0;
}