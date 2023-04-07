#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Welcome to the calculator program!\n");
    printf("Please select an operation:\n");
    printf("1. Sum of 2 numbers\n");
    printf("2. Subtraction of 2 numbers\n");
    printf("3. Multiplication of 2 numbers\n");
    printf("4. Division of 2 numbers\n");
    printf("5. Square root of a number\n");
    printf("6. Power 'm' of a number\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            result = num1 + num2;
            printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, result);
            break;
        case 2:
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            result = num1 - num2;
            printf("The subtraction of %.2f and %.2f is %.2f\n", num1, num2, result);
            break;
        case 3:
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            result = num1 * num2;
            printf("The multiplication of %.2f and %.2f is %.2f\n", num1, num2, result);
            break;
        case 4:
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("The division of %.2f by %.2f is %.2f\n", num1, num2, result);
            }
            break;
        case 5:
            printf("Enter the number: ");
            scanf("%f", &num1);
            if (num1 < 0) {
                printf("Error: Cannot compute square root of a negative number\n");
            } else {
                result = sqrt(num1);
                printf("The square root of %.2f is %.2f\n", num1, result);
            }
            break;
        case 6:
            printf("Enter the number: ");
            scanf("%f", &num1);
            printf("Enter the power: ");
            scanf("%f", &num2);
            result = pow(num1, num2);
            printf("%.2f raised to the power of %.2f is %.2f\n", num1, num2, result);
            break;
        default:
            printf("Error: Invalid choice\n");
            break;
    }

    return 0;
}
