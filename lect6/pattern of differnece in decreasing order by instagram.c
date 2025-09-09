#include<stdio.h>
int main(){
    int n=6;
    int start = 1;
    for(int r=0;r<n;r++){
        int num = start;
        for(int c=0;c<=r;c++){
            printf("%d",num);
            if(c<r)
            {
                num-=(n-r+c);
                printf(" ");
            }
        }
        printf("\n");
        start+=(n-(r-0));
    }
    return 0;
}