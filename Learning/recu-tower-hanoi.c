// The towers of hanoi problem is a puzzle to solve in any programming language.

// In this problem you are given a set of three poles and n disks, with each disk a different size.

// Let's name the poles are A, B, and C, and let's number the disks from 1 (smallest disk) to n (largest disk).

// At the beginning, all n disks are on pole A, in order of decreasing size from bottom to top, so that disk n is on the bottom and disk 1 is on the top.

// The objective of the puzzle is to move the entire disks from A to C, obeying the following simple rules:
// Only one disk can be moved at a time.
// Each move consists of taking the upper disk from one of the pole and placing it on top of another pole i.e. a disk can only be moved if it is the uppermost disk on a pole.
// No disk may be placed on top of a smaller disk.
// For example if the number of disks are given as 2 then the output will be:
// Move disk - 1 from pole A to B
// Move disk - 2 from pole A to C
// Move disk - 1 from pole B to C

#include <stdio.h>
void hanoi(int n, char a, char b, char c){
    if(n == 1){
        printf("Move disk - %d from pole %c to %c\n", n, a, c);
    } else{
        hanoi(n - 1, a, c, b);
        printf("Move disk - %d from pole %c to %c\n", n, a, c);
        hanoi(n - 1, b, a, c);
    }

}
void main(){
    int n;
    printf("Enter number of disks : ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
}