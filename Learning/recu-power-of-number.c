// First let us consider the mathematical solution for the given problem.
// The number 4 to the power of 3 can be calculated as 43 = 4 * 4 * 4 (Multiplying number 4 by 3 times).
// The number 5 to the power of 2 can be calculated as 52 = 5 * 5 (Multiplying number 5 by 2 times).
// In the similar way number m to the power of n can be calculated as mn = m * m * .... n times (Multiplying number m by n times).
// The recursive formula for m to the power of n is:
// power(m, n) = m * power(m, n-1); if n != 0 (Recursive criteria)
// power(m, n) = 1; if n = 0 (Base criteria)

#include <stdio.h>
int power(int m, int n){
    if(n == 0 ){
        return 1;
    } else{
        return m * power(m, n - 1);
    }
}
void main(){
    int m, n;
    printf("Enter a number : ");
    scanf("%d", &m);
    printf("Enter power : ");
    scanf("%d", &n);
    printf("%d to the pwer of %d is : %d\n", m, n, power(m,n));
}