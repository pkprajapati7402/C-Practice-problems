// Write a C program to swap the values of two integers without using the thir temporary variable.

#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two varibles a and b : ");
    scanf("%d %d", &a, &b);
    printf("Before swapping a = %d, b = %d\n", a, b);
    // Logic
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a = %d, b = %d\n", a, b);
    return 0;
}