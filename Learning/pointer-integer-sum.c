// To understand the difference between pass by value and pass by reference, Write a C program to find sum of two integers using functions.

// At the time of execution, the program should print the message on the console as:
// Enter two integer values : 
// For example, if the user gives the input as:
// Enter two integer values : 12 23
// then the program should print the result as:
// Sum of two integers : 35

#include <stdio.h>
int addition(int a, int b, int *sum){
    *sum = a + b;
    return sum;
}

void main(){
    int firstNum, secondNum, sum = 0;
    printf("Enter two integer values : ");
    scanf("%d %d", &firstNum, &secondNum);
    printf("Sum of two integers : %d\n", sum);
}