#include <stdio.h>

int findLargestAfterDeletingDigit(int num) {
    int maxNum = 0;
    int tempNum = num;

    int digits[4];
    int i;
    for (i = 3; i >= 0; i--) {
        digits[i] = tempNum % 10;
        tempNum /= 10;
    }

    
    for (i = 0; i < 4; i++) {
        tempNum = 0;
        int j;
        for (j = 0; j < 4; j++) {
            if (j != i) {
                tempNum = tempNum * 10 + digits[j];
            }
        }
        if (tempNum > maxNum) {
            maxNum = tempNum;
        }
    }

    return maxNum;
}

int main() {
    int num;

    printf("enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNum = findLargestAfterDeletingDigit(num);

    printf("Largest number after deleting a single digit: %d\n", largestNum);

    return 0;
}