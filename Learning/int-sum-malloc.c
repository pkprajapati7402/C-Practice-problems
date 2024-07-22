#include <stdio.h>
#include <stdlib.h>
void main(){
    int *a, *b;
    a = (int *) malloc(sizeof(int));
    a = (int *) malloc(sizeof(int));
    printf("Enter two integer values : ");
    scanf("%d %d", a, b);
    printf("Sum of two integers %d and %d = %d\n", *a, *b, *a + *b);
}