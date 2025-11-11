 //check whether a array is palindrome or not using recursion
#include <stdio.h>
int isPalindrome(int arr[], int start, int end)
{
    if (start >= end)
        return 1; 

    if (arr[start] != arr[end])
        return 0;

    return isPalindrome(arr, start + 1, end - 1); // start +1 = ++start and end -1 = --end
}
int main()
{
    int arr[]={1,2,3,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(isPalindrome(arr,0,n-1))
        printf("Array is palindrome \n");
    else
        printf("Array is not palindrome");

}