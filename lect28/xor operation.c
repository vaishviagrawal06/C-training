//find the unique numbers in an array in xoroperation
#include<stdio.h>
int main()
{
    int arr []= {1,2,3,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int xor_result = 0;
    for (int i =0 ; i <n ;i++)
    {
        xor_result = xor_result ^ arr[i];
    }
    printf("%d",xor_result);
    return 0;
}
