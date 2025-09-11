#include <stdio.h>
int sum(int a,int b){
    return a+b;
}

int main() {
    int x,y,s;
    printf("enter two number");
    scanf("%d %d",&x,&y);
    s = sum(x,y);
    printf("sum of two number is %d",s);

    return 0;

}
