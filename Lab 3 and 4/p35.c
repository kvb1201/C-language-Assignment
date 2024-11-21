/* A PROGRAM TO READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF
N*/

#include <stdio.h>

int main()
 {
    int N, sum = 0, digit;

    // Read the number N
    printf("Enter a number: ");
    scanf("%d", &N);

    // Calculate the sum of the digits
    while (N != 0) {
        digit = N % 10;  // Find  the last digit
        sum =sum + digit;    // Add the digit to the sum
        N =N/ 10;         // Remove the last digit from N
    }

    // Print the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}