// Toggle Ccse
#include <stdio.h>
#include <ctype.h>

void toggleCase(char* str) {
    while (*str) {
        if (isupper(*str)) {
            *str = tolower(*str);
        } else if (islower(*str)) {
            *str = toupper(*str);
        }
        str++;
    }
}

int main() {
    char str[50];
    printf("enter the string:");
    scanf("%s",str);
    
    toggleCase(str);
    
    printf("Toggled case: %s\n", str);
    
    return 0;
}