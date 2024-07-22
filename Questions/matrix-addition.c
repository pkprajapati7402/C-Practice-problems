// Write a C program to add two matrices of 3x3 order.
int main(){
    int a[3][3], b[3][3], i, j;
    printf("Enter the elements of matrix A : ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of matrix B : ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("The matrix A is: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    printf("The matrix B is: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of two matrices is : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}