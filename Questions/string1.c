#include <stdio.h>
#include <string.h>
int main(){
    char a[5][100], i, j;
    printf("Enter the names of 5 person : ");
    for(i = 0; i < 5; i++){
        scanf("%s", a[i]);
    }
    printf("The names are\n");
    for(i = 0; i < 5; i++){
        printf(" %s", a[i]);
    }
    // 
    // for (i = 0; i < n - 1; i++) {
    //     for (j = i + 1; j < n; j++) {
    //         if (strcmp(names[i], names[j]) > 0) {
    //             strcpy(temp, names[i]);
    //             strcpy(names[i], names[j]);
    //             strcpy(names[j], temp);
    //         }
    //     }
    // }
    return 0;
}

// Write a C program to take input some names, and sort them in alphabetical order.
#include <stdio.h>
#include <string.h>

int main(){
    char a[100][100], temp[100], i, j, n;
    printf("Enter the number of names you want to enter : ");
    scanf("%d", &n);
    printf("Enter the %d names : ", n);
    for(i = 0; i < n; i++){
        scanf("%s", a[i]);
    }

    printf("The names before sorting are : \n");
    for(i = 0; i < n; i++){
        printf("%s ", a[i]);
    }
    printf("\n");
    // Logic 
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(strcmp(a[i], a[j]) > 0){
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
    printf("After sorting\n");
    for(i = 0; i < n; i++){
        printf("%s", a[i]);
    }
    
    return 0;
}

// Write a C program to convert a string lower -> uppercase.
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    int i, n, j;
    printfc("Enter string : ");
    scanf("%s", a);
    getchar();
    printf("OUTPUT:     %s\n", strupr(a));
    return 0;
}

// Write a C program to concatenate two strings.
#include <string.h>
#include <stdio.h>
int main(){
    char a[100], b[100];
    int i, j, n;
    return 0;
}