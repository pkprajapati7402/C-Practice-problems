#include <stdio.h>
int main(){
    int i, j;
    printf("The prime numbers between 1 - 50 are 2");
    for(i = 2; i <= 50; i++){
        for(j = 2; j < i; j++){
            if(i % j == 0){
                break;
            } else{
                printf(" %d", i);
                break;
            }
        }
    }
    return 0;
}