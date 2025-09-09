#include <stdio.h>

int main(){
    for(int end ='z';end>='a';end--){
        for(int ch='a';ch<=end;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;

}