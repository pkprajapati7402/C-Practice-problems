/*
Write a program to find the largest of two integer numbers using DMA.

The process is
declare two integer pointer variables
allocate the heap memory through malloc()
read two integers
find the largest of two numbers
free the heap memory space
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a, *b;
    a = (int *) malloc(sizeof(int));
    b = (int *) malloc(sizeof(int));
    printf("Enter two integer values : "):
    scanf("%d %d", a, b);
    if(*a > *b){
        printf("The largest of two numbers %d and %d is : %d\n", *a, *b, *a);
    } else{
        printf("The largest of two numbers %d and %d is : %d\n", *a, *b, *b);
    }
    free(a);
    free(b);
    return 0;
}