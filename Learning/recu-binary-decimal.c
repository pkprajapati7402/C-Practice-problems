#include <stdio.h>
#include <math.h>

// Function prototype
int binaryToDecimal(int binary);

int main() {
    int binary;

    // Prompt user for a binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal and print the result
    int decimal = binaryToDecimal(binary);
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}

// Recursive function to convert binary to decimal
int binaryToDecimal(int binary) {
    // Base case: if binary is 0, return 0
    if (binary == 0) {
        return 0;
    } else {
        // Get the last digit (0 or 1) and remove it from binary
        int last_digit = binary % 10;
        int remaining_binary = binary / 10;

        // Recursive call and add the last digit converted to decimal
        return last_digit + 2 * binaryToDecimal(remaining_binary);
    }
}
