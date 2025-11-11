 //check whether a array is binary search or not
 #include<stdio.h>
 int binarySearch(int arr[],int t,int s,int e)
 {
     if(s>e)
     {
         return -1;
     }
     int mid=(s+e)/2;
        if(arr[mid]==t)
        {
            return mid;
        }
        else if(arr[mid]>t)
        {
            return binarySearch(arr,t,s,mid-1);
        }
        else
        {
            return binarySearch(arr,t,mid+1,e);
        }
    }
    int main()
    {
        int arr[]={1,2,3,4,5};
        int size=sizeof(arr)/sizeof(arr[0]);
        int target=3;
        int result=binarySearch(arr,target,0,size-1);
        if(result!=-1)
        {
            printf("Element found at index %d\n",result);
        }
        else
        {
            printf("Element not found\n");
        }
        return 0;

    }