#include <stdio.h>

int main() {
    int n=7, i, j ;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j||i+j==n-1){
               printf("*"); 
            }else
            printf(" ");
       }
      printf("\n");
    }
    return 0;

}
