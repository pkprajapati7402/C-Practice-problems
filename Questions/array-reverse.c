// Write a C program to copy the contents of one array into another in the reverese order.

#include <stdio.h>
int main(){
    int a[100], b[100], i, j, n;
    printf("Enter the length of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("first array are : ");
    for(i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    // Logic 
    for(i = 0, j = n - 1; i < n, j >= 0; i++, j--){
        b[i] = a[j];
    }
    printf("Copied array is : ");
    for(i = 0; i < n; i++){
        printf("%d\t", b[i]);
    }
    printf("\n");
    return 0;
}