// Factorial of a number.

#include <stdio.h>
int main(){
    int num, i, j, fact = 1;
    printf("Enter the number : ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++){
        fact *= i;
    }
    printf("The factorial of %d is = %d", num, fact);
    return 0;
}

// Divisor of a Number.

#include <stdio.h>
int main(){
    int num, i, j;
    printf("Enter the number = ");
    scanf("%d", &num);
    printf("\nThe divisor of %d = ", num);
    for (i = 1; i <= num; i++){
        if (num % i == 0){
            printf(" %d", i);
        }
    }

    return 0;
}