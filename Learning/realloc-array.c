/*
The realloc() function is capable of increasing or decreasing the memory that has been allocated previously at run time.

The general format of realloc() is:
(void *) realloc (pointer variable, number of bytes);
The first argument of realloc() is a pointer to a block of memory of which the size is to be alter.

The second argument specifies the new size.

If the allocation is successful, the returned value is again the pointer variable to the first byte of the allocated memory retaining the old contents.

Let us consider the below example:
int *p;
p = (int *) calloc(3, sizeof (int));
......
p = (int *) realloc (p, 5);
Here pointer variable p is allocated with memory of 2 bytes to save the base address returned by calloc() function.

The calloc() creates the heap memory for 3 objects, each with 2 bytes of memory and returns the base address of the entire memory.

After execution of some code, programmer wants to increase the size of the array to 5 regions then realloc() function is used to increase 3 regions into 5 regions.
*/

#include <stdio.h>
#include <stdlib.h>
void main(){
    int *p;
    p = (int *) malloc(sizeof(int));
    *p = 5;
    printf("Given integer value = %d\n", *p);
    p = (int *) realloc(p, 3);
    *(p + 0) = 10;
    *(p + 1) = 20;
    *(p + 2) = 30;
    prinf("After resizing the values are : %d %d %d\n", *(p + 0), *(p + 1), *(p + 2));

}


// Program 2
#include <stdio.h>
#include <stdlib.h>

int main() {
     
     
    int *ptr = (int *)malloc(sizeof(int) * 2);
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

     
    ptr[0] = 10;
    ptr[1] = 20;

     
    int *ptr_new = (int *)realloc(ptr, sizeof(int) * 3);
    if (ptr_new == NULL) {
        fprintf(stderr, "Memory reallocation failed\n");
        free(ptr); 
        return 1;
    }

    
    ptr_new[2] = 30;

     
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptr_new[i]);
    }
    printf("\n");
 
    free(ptr_new);

    return 0;
}
