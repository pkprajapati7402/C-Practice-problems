// C prgram for Binary Seach
#include <stdio.h>
int main() {
    int a[20], i, j, n, key, flag = 0, low, high, mid, temp;
    
    printf("Enter value of n : ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Enter element for a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Enter key element : ");
    scanf("%d", &key);
    
    // Bubble sort process to sort the array
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("After sorting the elements in the array are\n");
    for (i = 0; i < n; i++) {
        printf("value of a[%d] = %d\n", i, a[i]);
    }
    
    low = 0;
    high = n - 1;
    
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            flag = 1;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (flag) {
        printf("The key element %d is found at the position %d\n", key, mid);
    } else {
        printf("The key element %d is not found in the array\n", key);
    }
    
    return 0;
}


// Binary search program using functions.

#include <stdio.h>

// Function to perform binary search
int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (array[mid] == target) {
            return mid; // Target found
        }

        // If target is greater, ignore the left half
        if (array[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int array[] = {2, 3, 4, 10, 40};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 10;

    int result = binarySearch(array, size, target);

    if (result != -1) {
        printf("Element is present at index %d.\n", result);
    } else {
        printf("Element is not present in array.\n");
    }

    return 0;
}
