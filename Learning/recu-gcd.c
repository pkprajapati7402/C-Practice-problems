// The greatest common divisor (gcd) of two or more integers, when at least one of them is not zero, is the largest positive integer that is a divisor of both numbers.

// For example, the gcd(8, 12) is 4.

// First let us consider the mathematical solution for the given problem.
// The gcd of two numbers 54, 24 can be calculated as gcd(54, 24) = gcd(24, 54 % 24) = gcd(24, 6) = 6.
// The gcd of two numbers 27, 18 can be calculated as gcd(27, 18) = gcd(18, 27 % 18) = gcd(18, 9) = 9.
// The recursive formula for gcd of two numbers a and b is:
// gcd(a, b) = b; if a % b = 0 (Base criteria)
// gcd(a, b) = gcd(b, a % b); otherwise (Recursive criteria)

#include <stdio.h>
int gcd(int a, int b){
    if(a % b == 0){
        return b;
    } else{
        return gcd(b, a%b);
    }
}
void main(){
    int a, b;
    printf("Enter two integer values : ");
    scanf("%d %d", &a, &b);
    printf("The gcd of two numbers %d and %d = %d\n", a, b, gcd(a, b));
}