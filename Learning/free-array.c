/*
The memory obtained by malloc(), calloc() and realloc() functions can be free when that space is not required for any storage. The function free() does this job.

The general format of free() is:
free(pointer variable);
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p  = (int *) malloc(sizeof(int));
    printf("p = ");
    scanf("%d", p);
    if(p == NULL){
        printf("Failed to allocate space for %ld bytes", sizeof(int));
        return 1;
    }
    printf("Value with in heap memory = %d\n", *p);
    free(p);
    return 0;
}