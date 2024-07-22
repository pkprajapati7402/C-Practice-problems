#include <stdio.h>
int main(){
    int a[20], i, n, j, temp;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter element for a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("Before sorting the elements in the array are\n");
    for (i = 0; i < n; i++){
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n - i -1; j++){
            if(a[i] > a[j + 1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("After sorting the elements in the array are\n");
    for (i = 0; i < n; i++){
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
    return 0; 
}

// Alternate method 2
#include <stdio.h>

int main() {
    int a[20], i, n, j, temp;
    printf("Enter value of n : ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter element for a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Before sorting the elements in the array are\n");
    for (i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
    
    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap a[j] and a[j + 1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("After sorting the elements in the array are\n");
    for (i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}



// Bubble sort Descending Method.

#include <stdio.h>

// Function to perform Bubble Sort in descending order
void bubbleSortDescending(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] < array[j + 1]) {
                // Swap elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;

    // Ask user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Ask user to input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the array in descending order
    bubbleSortDescending(array, size);

    // Print the sorted array
    printf("The array sorted in descending order is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
