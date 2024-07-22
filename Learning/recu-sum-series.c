// Write a program to find the sum of series 11 + 22 + 33 + ....... using recursion process.

#include <stdio.h>
#include <math.h>

// Function prototype
long long int sumOfSeries(int n);

int main() {
    int n;

    // Prompt user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    long long int result = sumOfSeries(n);

    // Print the result
    printf("The sum of the series is: %lld\n", result);

    return 0;
}

// Recursive function to calculate the sum of the series
long long int sumOfSeries(int n) {
    // Base case: if n is 0, the sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: calculate the sum
    return (long long int)pow(n, n) + sumOfSeries(n - 1);
}
