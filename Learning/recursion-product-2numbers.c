// The below sample code is to find the product of a given two numbers using recursion process.

// First let us consider the mathematical solution for the given problem.
// The product of 4 and 3 can be calculated as 4 * 3 = 4 + 4 + 4 (Adding number 4 by 3 times).
// The product of 15 and 2 can be calculated as 15 * 2 = 15 + 15 (Adding number 15 by 2 times).
// In the similar way product of a number m and n can be calculated as m * n = m + m + .... n times (Adding number m by n times).
// The recursive formula for product of m and n is:
// product(m, n) = m + product(m, n-1); if n != 0 (Recursive criteria)
// product(m, n) = 0; if n = 0 (Base criteria)
// product(m, n) = product(n, m); if m < n (for less repetitions)

#include <stdio.h>
int product(int m, int n){
    if(m < n){
        return product(n,m);
    } else if(n == 0){
        return 0;
    } else{
        return m + product(m,n -1 );
    }
}
void main(){
    int m, n;
    printf("Enter two integer values : ");
    scanf("%d %d", &m, &n);
    printf("Product of %d and %d is : %d\n", m, n, product(m, n));
}