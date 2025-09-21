#include <stdio.h>

   int BSearch(){
    int a[5]={1,2,3,4,5};
    int start =0;
    int end =4;
   
    int target =5;
    while(start<=end){
        int mid = (start +end)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]<target){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
            
    }

   }

    int main(){
     BSearch();
     printf("Element found at index %d",BSearch());
     return 0;
    }