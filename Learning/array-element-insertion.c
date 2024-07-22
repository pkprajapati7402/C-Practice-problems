// Write a C program to insert an element at a given position in an array using functions.

// array_operations.c
#include <stdio.h>

// Function to insert an element at a given position in an array
int insertElement(int arr[], int n, int element, int position) {
    if (position > n || position < 0) {
        printf("Invalid position!\n");
        return n; // No change in array size
    }
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    return n + 1; // Return the new size of the array
}

// Function to display the elements of an array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// main.c

#include <stdio.h>

// Declarations of the functions implemented in array_operations.c
int insertElement(int arr[], int n, int element, int position);
void displayArray(int arr[], int n);

int main() {
    int arr[100];
    int n, element, position;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted and its position
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position at which to insert the element: ");
    scanf("%d", &position);

    // Insert the element
    n = insertElement(arr, n, element, position);

    // Display the array after insertion
    printf("Array after insertion:\n");
    displayArray(arr, n);

    return 0;
}




// Codetantra Code

// function.c


// Try 2.

void read1(int a[50], int n) {
    int i; 
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void displa(int a[50], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insertpos(int a[50], int n, int pos, int val) {
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return n;
    }
    for(int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = val;
    return n + 1;
}
