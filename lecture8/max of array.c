#include<stdio.h>

int main() {
    int a[5] = {5, 4, 3, 2, 1};
    int max = a[0];
    
    for(int i=1;i<5;i++) {
       if(a[i] > max) {
            max = a[i];
        }
    }
    
    printf("Maximum no. = %d\n", max);
    return 0;
}