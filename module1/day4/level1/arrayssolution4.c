//Diff between even & odd elements
#include <stdio.h>

int finddif(int arr[], int size) {
    int sumeven;
    int sumodd ;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumeven += arr[i];
        } else {
            sumodd += arr[i];
        }
    }

    return sumeven - sumodd;
}

int main() {
    int numbers[5];

    printf("Enter %d numbers:\n",5);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    int dif = finddif(numbers,5);

    printf("Difference between the sum of even and odd elements: %d\n", dif);

    return 0;
}