#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if(n == 2){
        printf("Prime Number\n");
        return 0;
    } else if(n <= 0){
        printf("Invalid!\n");
        return 0;
    }
    for(i = 2; i < n; i++){
        for(j = 2; j < i; j++){
            if(i % j == 0){
                printf("Not a Prime number\n");
                break;
            } else{
                printf("Prime number\n");
                break;
            }
        }
    }
    return 0;
}


// Method 2
#include <stdio.h>
int main(){
    int i, num;
    printf("Ente a number : ");
    scanf("%d", &num);
    for(i = 2; i < num; i++){
        if(num % i == 0){
            printf("Not prime\n");
            return 0;
        } else{
            printf("Prime\n");
            return 0;
        }
    }
}