// 1
// 7 2
// 12 8 3
// 16 13 9 4
// 19 17 14 10 5
// 21 20 18 15 11 6

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