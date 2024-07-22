/*
1. Addition of two matrices
2. Subtraction
3. Finding upper and lower trianglular Matrix
4. Transpose of a matrix
5. Product of matrix
*/
#include <stdio.h>
int main()
{
    int num;
    char option;
    while (option == 'y' || 'Y'){
        printf("1. Addition of two Matrices\n");
        printf("2. Subtraction of Two Matrices\n");
        printf("3. Finding Upper and lower Triangular Matrices\n");
        printf("4. Transpose of a matrix\n");
        printf("5. Multiplication of two matrices\n");

        printf("Choose your option : ");
        scanf("%d", &num);

        switch (num){
            case 1: printf("1. You want to Add two Matrices ! \n"); break;
            case 2: printf("2. You want to Subtract two matrices! \n"); break;
            case 3: printf("3. You want to Find upper or lower triangle! \n"); break;
            case 4: printf("4. You want to Find Transpose of matrices! \n"); break;
            case 5: printf("5. You want to Multiply two matrices! \n"); break;
            default: printf("Choose option 1-5 Only !"); break;
        }
        printf("Do You want to continue again (Y/N) : ");
        scanf("%c", &option);
    }

    return 0;
}