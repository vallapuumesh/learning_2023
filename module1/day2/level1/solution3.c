#include <stdio.h>

int main() {
    int a = 60;
    double b = 4.10;
    
    // Implicit type casting
    double implicit = a + b;
    printf("Implicit casting: %lf\n", implicit);
    
    // Explicit type casting
    int explicit = (int)b;
    printf("Explicit casting (truncated): %d\n", explicit);
    
    int rounded =(int) (b + 0.90);
    printf("Explicit casting (rounded): %d\n", rounded);
    
    return 0;
}