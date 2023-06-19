#include <stdio.h>

void swap(void* ptr1, void* ptr2, size_t size) {
    char* p1 = (char*)ptr1; 
    char* p2 = (char*)ptr2;

    while (size--) {
        char temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}

int main() {
    int a = 5, b = 10;
    double x = 2.5, y = 3.7;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("x = %lf, y = %lf\n", x, y);

    swap(&a, &b, sizeof(int)); 
    swap(&x, &y, sizeof(double));

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("x = %lf, y = %lf\n", x, y);

    return 0;
}