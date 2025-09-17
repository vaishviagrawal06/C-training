#include <stdio.h>

int maxarraysum(int arr[], int n,int k){
    int maxsum =0;
    for(int i=0;i<=n-k;i++){
        int currsum=0;
       for(int j=i;j<i+k;j++){
              currsum = currsum+arr[j];
         if(currsum>maxsum){
            maxsum=currsum;

       }
    }
    return maxsum;
}
}

int main(){
    int arr[5]={1,2,3,2,4};
    int k=3;

    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Maximum sum of elements is %d\n",maxarraysum(arr,n,k));

    return 0;
}

