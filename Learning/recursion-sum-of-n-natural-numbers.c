// First let us consider the mathematical solution for the given problem.
// The sum of 4 natural numbers can be calculated as sum(4) = 4 + 3 + 2 + 1 (Adding numbers from 4 to 1).
// The sum of 7 natural numbers can be calculated as sum(7) = 7 + 6 + 5 + 4 + 3 + 2 + 1 (Adding numbers from 7 to 1).
// In the similar way sum of n natural numbers can be calculated as sum(n) = n + (n - 1) + .... + 1 (Adding numbers from n to 1).
// The recursive formula for sum of n natural numbers is:
// sum(n) = n + sum(n-1); if n != 1 (Recursive criteria)
// sum(n) = 1; if n = 1 (Base criteria)

#include <stdio.h>
int sum(int n){
    if(n == 1 ){
        return n;
    } else{
        return n + sum(n - 1);
    }
}
void main(){
    int n; 
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Sum of %d natural numbers = %d\n", n, sum(n));
}

// =============================================================

// Sum of Digits of a number.
#include <stdio.h>
int sum(int n){
    if(n == 0){
        return n;
    } else{
        return (n % 10)+ sum(n / 10);
    }
}
void main(){
    int n;
    printf("Enter an integer value : ");
    scanf("%d", &n);
    printf("Sum of digits of given number %d = %d\n", n, sum(n));
}