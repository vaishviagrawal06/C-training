//{-1,0,5,-2,0,3} sort this in {0,0,-1,-2,3,5} using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {-1, 0, 5, -2, 0, 3};
    int n = 6;

    int *ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        ptr[i] = arr[i];
    }

    int *result = (int *)malloc(n * sizeof(int));
    int index = 0;

   for(int i=0;i<n;i++){
        if(ptr[i]==0){
            result[index]=ptr[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        if(ptr[i]<0){
            result[index]=ptr[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        if(ptr[i]>0){
            result[index]=ptr[i];
            index++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }


    return 0;
}
