// LEETCODE - 121. Best Time to Buy and Sell Stock
//Input: prices = [7,1,5,3,6,4]
// Output: 5

#include<stdio.h>
int main(){
    int arr[]={7,1,5,3,6,4};
    int min_price=arr[0];
    int max_profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]<min_price){
            min_price=arr[i];
        }
        else if(arr[i]-min_price>max_profit){
            max_profit=arr[i]-min_price;
        }

    }
    printf("%d\n",max_profit);
    return 0;

}