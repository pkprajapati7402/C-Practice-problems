#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, i, n, max, min;

    printf("Enter how many values you want to read: ");
    scanf("%d", &n);

    // Allocate memory for n integers using safe reallocation
    p = (int *)realloc(NULL, n * sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1; // Indicate error
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    // Initialize max and min with the first element
    max = p[0];
    min = p[0];

    for (i = 1; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
        }
        if (p[i] < min) {
            min = p[i];
        }
    }

    printf("The maximum element of the array = %d\n", max);
    printf("The minimum element of the array = %d\n", min);

    // Free the allocated memory to prevent memory leaks
    free(p);

    return 0; // Indicate successful execution
}
