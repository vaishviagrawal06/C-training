#include<stdio.h>

int main() {
    int a[5] = {5, 4, 3, 2, 1};
    int min = a[0]; 
    
    for(int i = 1; i < 5; i++) {
        if(a[i] < min) {
            min = a[i]; 
        }
    }
    
    printf("Minimum = %d\n", min);
    return 0;
}
