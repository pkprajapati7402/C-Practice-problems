/*
Create a structure called "cricket" in C that can store name of players, team name and batting average. Using cricket declare an array of 5 players and write a C program to read the information about players.

*/


#include <stdio.h>
struct cricket
    {
        char pname[20];
        char tname[20];
        float avg;
    };
    
int main(){
    int i;
    
    struct cricket p[5];
    printf("Enter the values: ");
    for(i = 0; i < 2; i++){
        scanf("%s %s %f", &p[i].pname, &p[i].tname, &p[i].avg);
    }
    printf("The Enterd values are : \n");
    for(i = 0; i < 2; i++){
        printf("%s    %s    %f\n", p[i].pname, p[i].tname, p[i].avg);
    }
    return 0;
}



// Question

