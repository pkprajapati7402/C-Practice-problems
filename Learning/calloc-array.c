/*
The calloc() function is used for memory allocation at the time of execution.

This function takes two arguments, the first argument represents number of objects to be allocated and the second argument represents number of bytes to be allocated for each object.

The calloc() function returns the base address of the contiguous memory locations which it is allocated.

The return type of address is of type void, that’s why programmer have to typecast that void type to any other primitive data type depending on the pointer variable.

The memory which is allocated by calloc() function by default assigns initial values as zeros.

The general format of calloc() is:
(void *) calloc(number of objects, bytes of each object);
Let us consider the below example:
int *p;
p = (int *) calloc(10, sizeof (int));
Here pointer variable p is allocated with memory of 2 bytes to save the base address returned by calloc() function.

The calloc() creates the heap memory for 10 objects, each with 2 bytes of memory and returns the base address of the entire memory.

*/

#include <stdio.h>
int main(){
    int *a, n, i;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    a = (int *) calloc(n, sizeof(int));
    printf("Enter %d elements : ", n);
    for(i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    printf("The given array is : ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}