#include <stdio.h>
#include "header.h"

int main()
{
    int num1, num2, result;

    // Ask the user for the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Ask the user for the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform addition
    result = add(num1, num2);
    // Display the result
    printf("The result of adding %d and %d is %d\n", num1, num2, result);

    // Perform subtraction
    result = subtract(num1, num2);
    // Display the result
    printf("The result of subtraction %d and %d is %d\n", num1, num2, result);

    // Perform multiplication
    result = multiply(num1, num2);
    // Display the result
    printf("The result of %d multiplied by %d is %d\n", num1, num2, result);

    return 0;
}
