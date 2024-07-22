#include <stdio.h>
#include <math.h>
int main(){
    int a, b, n;
    printf("Enter the first and Second term of GP : ");
    scanf("%d %d", &a, &b);
    printf("\nEnter the Number of terms : ");
    scanf("%d", &n);
    float r = b / a;
    float sum = a * ((pow(r,n) - 1)) / (r - 1);
    printf("The sum of the Geometric Progression = %d\n", sum);
    return 0;

}