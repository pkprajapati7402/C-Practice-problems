// Write a program to read and display the elements of an array in reverse order using pointers.

// Note: Write the functions read1() and displayInReverse() in PointerWithArray4a.c.

#include <stdio.h>

void read1(int arr[], int n) {
  // Read n elements from the user and store them in the array
  printf("Enter %d elements for the array:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
}

void displayInReverse(int arr[], int n) {
  // Use a pointer to access elements from the end
  int *ptr = arr + n - 1;  // Point to the last element

  // Print elements in reverse order using the pointer
  printf("Elements in reverse order:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", *ptr);
    ptr--;  // Move the pointer to the previous element
  }
  printf("\n");
}

int main() {
  int arr[100];
  int n;

  printf("Enter the number of elements (maximum 100): ");
  scanf("%d", &n);

  read1(arr, n);
  displayInReverse(arr, n);

  return 0;
}




// Method2

#include <stdio.h>

void read1(int *arr, int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }
}

void displayInReverse(int *arr, int size) {
    printf("Elements in reverse order:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    read1(arr, size);
    displayInReverse(arr, size);
    
    return 0;
}
