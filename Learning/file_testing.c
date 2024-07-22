#include <stdio.h>

void read1(int a[20], int n) {
    int i;
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void display(int a[20], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // Print newline at the end
}

void bubbleSort(int a[20], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}





// ===================================

#include <stdio.h>

void read1(int a[20], int n) {
    int i;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void display(int a[20], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // Print newline at the end
}

void bubbleSort(int a[20], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


