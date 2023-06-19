#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int Ternary(int a, int b) {
    int max = (a > b) ? a : b;
    return max;
}

int main() {
    int a = 10, b = 20;
    
    int IfElse = max(a, b);
    printf("The maximum number using if-else: %d\n", IfElse);
    
    int maxTernary = Ternary(a, b);
    printf("The maximum number using ternary operator: %d\n", maxTernary);
    
    return 0;
}