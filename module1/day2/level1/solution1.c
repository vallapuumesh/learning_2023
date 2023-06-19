#include <stdio.h>

void printExponent(double x) {
    unsigned long long* ptr = (unsigned long long*)&x; 
    unsigned long long bits = *ptr;

    
    unsigned long long exponent = (bits >> 52) & 0x7FF;

    
    printf("Exponent (hex): 0x%llX\n", exponent);

    
    printf("Exponent (binary): 0b");
    for (int i = 10; i >= 0; i--) {
        unsigned long long mask = 1ULL << i;
        printf("%d", (exponent & mask) ? 1 : 0);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}