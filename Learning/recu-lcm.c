// The least common multiple (lcm) of two or more integers, is the smallest positive integer that is divisible by both a and b.

// First let us consider the mathematical solution for the given problem.
// The lcm of two numbers 4, 6 can be calculated as lcm(4, 6) = (4 * 6) / gcd(4, 6) = 24 / 2 = 12.
// The lcm of two numbers 21, 6 can be calculated as lcm(21, 6) = (21 * 6) / gcd(21, 6) = 126 / 3 = 42.
// The lcm of two numbers a, b can be calculated as lcm(a, b) = (a * b) / gcd(a, b).
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
    printf("The lcm of two numbers %d and %d = %d\n", a, b, (a*b) / gcd(a, b));
}



// ======================================================
// Codetantra method.
#include <stdio.h>
int gcd(int a, int b){
    if(a % b == 0){
        return b;
    } else{
        return gcd(b, a % b);
    }
}
int lcm(int a, int b){
    gcd(a, b);
    return (a * b) / gcd(a, b);
}

void main(){
    int a, b;
    printf("Enter two integer values : ");
    scanf("%d %d", &a, &b);
    printf("The lcm of two number %d and %d = %d\n", a, b, lcm(a, b));
}