#include <stdio.h>

int main() {
    char _operator;
    double num1, num2, result;

    // Displaying the calculator menu
    printf("Simple Calculator\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &_operator);

    // Taking input for operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Performing operations based on the operator
    switch (_operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
