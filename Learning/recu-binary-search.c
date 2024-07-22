// Write a program to search the given element from a list of elements with binary search technique using recursion.

// Note: Write the functions read(), bubbleSort(), display() and binarySearch() in Program912a.c

#include <stdio.h>

// Function prototypes
void read(int arr[], int n);
void bubbleSort(int arr[], int n);
void display(int arr[], int n);
int binarySearch(int arr[], int left, int right, int key);

int main() {
    int n, key;

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements into the array
    read(arr, n);

    // Sort the array
    bubbleSort(arr, n);

    // Display the sorted array
    printf("Sorted array: ");
    display(arr, n);

    // Prompt user for the element to search
    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, key);

    // Print the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

// Function to read elements into an array
void read(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to sort an array using bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to display the elements of an array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

// Recursive function to perform binary search
int binarySearch(int arr[], int left, int right, int key) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // If the element is present at the middle
        if (arr[mid] == key) {
            return mid;
        }

        // If the element is smaller than mid, it can only be present in left subarray
        if (arr[mid] > key) {
            return binarySearch(arr, left, mid - 1, key);
        }

        // Otherwise, the element can only be present in right subarray
        return binarySearch(arr, mid + 1, right, key);
    }

    // Element is not present in array
    return -1;
}
