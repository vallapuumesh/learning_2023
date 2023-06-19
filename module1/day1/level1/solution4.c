#include <stdio.h>

int main() {
    float num1;
    float num2;
    float result;
    char operator;
    
    printf("Enter Num1: ");
    scanf("%f", &num1);

    
    printf("Enter the operator: ");
    scanf(" %c", &operator);

    
    printf("Enter Num2: ");
    scanf("%f", &num2);

    
    switch (operator) {
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
            result = num1 / num2;
            break;
        default:
            printf("invalid operator\n");
            return 0;
    }

    
    printf("Result: %.2f\n", result);

    return 0;
}