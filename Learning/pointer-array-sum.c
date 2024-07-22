// Write a program to find the sum of n elements by allocating memory by using calloc() function.

// At the time of execution, the program should print the message on the console as:
// Enter n value : 
// For example, if the user gives the input as:
// Enter n value : 4
// Next, the program should print the message on the console as:
// Enter 4 values : 
// For example, if the user gives the input as:
// Enter 4 values : 3 5 4 7
// then the program should print the result as:
// The sum of given array elements : 19
// Note: Write the functions allocateMemory(), read1() and sum() in UsingCalloc.c.


#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for an array of given size
int *allocateMemory(int n) {
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    return arr;
}

// Function to read n elements into the array
void read1(int *arr, int n) {
    printf("Enter %d values: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to find the sum of elements in the array
int sum(int *arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    
    // Allocate memory for the array
    int *arr = allocateMemory(n);
    
    // Read elements into the array
    read1(arr, n);
    
    // Calculate sum of elements
    int total = sum(arr, n);
    
    // Display the sum
    printf("The sum of given array elements: %d\n", total);
    
    // Free allocated memory
    free(arr);

    return 0;
}
