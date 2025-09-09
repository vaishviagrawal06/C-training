#include<stdio.h>
int main(){
    int x,y;
    printf("enter two number");
    scanf("%d %d",&x,&y);

    if(x>y){
        printf("good  morning");
    }
    else if(y>x){
        printf("good day");
    
    }
   
    else{
        printf("good evening");
    
    }
    
    return 0;
}