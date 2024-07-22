// Write a C program to swap two integers using pointers and call by address variables.
#include <stdio.h>

// Function prototype
void swap(int *a, int *b);

int main() {
    int x, y;
    
    // Input values
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    
    // Print values before swap
    printf("Before swap: x = %d, y = %d\n", x, y);
    
    // Call the swap function
    swap(&x, &y);
    
    // Print values after swap
    printf("After swap: x = %d, y = %d\n", x, y);
    
    return 0;
}

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
