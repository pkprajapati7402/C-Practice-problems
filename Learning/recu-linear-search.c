// Write a program to search the given element from a list of elements with linear search technique using recursion.

#include <stdio.h>

// Function prototypes
void read1(int arr[], int n);
int linearsearch(int arr[], int n, int key, int index);

int main() {
    int n, key;

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements into the array
    read1(arr, n);

    // Prompt user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform linear search
    int result = linearsearch(arr, n, key, 0);

    // Print the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

// Function to read elements into an array
void read1(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Recursive function to perform linear search
int linearsearch(int arr[], int n, int key, int index) {
    // Base case: if index reaches n, key is not found
    if (index >= n) {
        return -1;
    }
    // If the key is found at the current index, return index
    if (arr[index] == key) {
        return index;
    }
    // Recur for the next element in the array
    return linearsearch(arr, n, key, index + 1);
}



// ==============================================
// CodeTantra Code

