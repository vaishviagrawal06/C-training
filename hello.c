#include <stdio.h>

int main() {
    int n,fact =1;
    
  printf("enter a number");
  scanf("%d",&n);
  while(n>0){
    fact*=n;
    n--;
  }
  printf("fatorial of number %d",fact);
    return 0;
}