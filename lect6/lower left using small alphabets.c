#include<stdio.h>
int main(){
    int num =97;
    for(int i =0;i<5;i++){
        for(int j =0;j<=i;j++){
            printf(" %c",num++);
        
        }
        printf("\n");
        
    }
    return 0;
}
