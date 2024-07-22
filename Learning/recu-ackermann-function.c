// Write a program to implement Ackermann function using recursion process.

// At the time of execution, the program should print the message on the console as:
// Enter two numbers : 
// For example, if the user gives the input as:
// Enter two numbers : 2 1
// then the program should print the result as:
 
// A(2, 1) = 5

#include <stdio.h>

// Function prototype
int ackermann(int m, int n);

int main() {
    int m, n;

    // Prompt user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    // Calculate and print the result of the Ackermann function
    printf("A(%d, %d) = %d\n", m, n, ackermann(m, n));

    return 0;
}

// Recursive function to calculate the Ackermann function
int ackermann(int m, int n) {
    // Base cases
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}
