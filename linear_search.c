#include <stdio.h>

int linearSearch(int arr[], int size, int target) {   // this code runs when line number 27 requested
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;           // Return the index where the target is found
        }
    }
    return -1;   // Return -1 if the target is not found
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
