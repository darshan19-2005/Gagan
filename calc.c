#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Taking user input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Space before %c to avoid newline issue

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Performing the operation
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
            return 1;
    }

    // Display the result
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}

