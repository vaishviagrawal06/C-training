#include<stdio.h>
int main(){
    int n =3;
    int arr[3][3];
    int i=0,j=n/2;
    for(int num =1;num<=n*n;num++){
        arr[i][j]=num;
        i--;
        j++;
        if(i==0 &&j==2){
            i=i+2;
            j=j+1;
            
        }  
          if(i==0&&j==2){
            i=i+1;
          
            
          } 
          if(j==2 && i!=0){
            i=i-1;
            j=j-2;
            
          }  
          if(i!=0 && j==0){
            i++;
            
          }
        printf("\n");
    }

}