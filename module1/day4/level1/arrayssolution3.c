//Reverse The Array
#include <stdio.h>


void reversearr(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    for(start=0 ;start<end;start++,end-- )// Move start and end indices towards the middle
 {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start and end indices towards the middle
    }
}

int main() {
    
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d numbers:", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reversearr(arr, 5);

    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}