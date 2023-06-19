#include <stdio.h>

void printbits(unsigned int num) {
    int i;
    int numBits = sizeof(num) * 8; 
    
    for (i = numBits - 1; i >= 0; i--) {
        unsigned int mask = 1 << i;
        printf("%d", (num & mask) ? 1 : 0);

        if (i % 8 == 0)
            printf(" "); 
    }
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits representation: ");
    printbits(num);
    printf("\n");

    return 0;
}