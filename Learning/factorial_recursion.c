#include <stdio.h>
int fact(long int n){
    if(n <= 1){
        return 1;
    } else{
        return n*(fact(n - 1));
    }
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Factorial of %d  = %d\n", n, fact(n));
}