//Decimal to Binary/Octal/Hex Conversion
#include <stdio.h>

void decimalintobinary(int decimal) {
    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void decimalintooctal(int decimal) {
    int octal[32];
    int i = 0;

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    printf("Octal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void decimalintohexadecimal(int decimal) {
    char hex[32];
    int i = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder - 10 + 'A';
        }
        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalintobinary(decimal);
    decimalintooctal(decimal);
    decimalintohexadecimal(decimal);

    return 0;
}