#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int getTotalSetBits(unsigned int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }
    return totalBits;
}

int main() {
    unsigned int a[3] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);

    int totalSetBits = getTotalSetBits(a, size);

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}