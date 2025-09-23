#include <stdio.h>

int main() {
    int arr[9] = {1,2,3,4,5,6,7,8,9}; 
    
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum = sum + arr[i * 3 + j];  
        }
        printf("%d\n", sum);
    }

    return 0;
}
