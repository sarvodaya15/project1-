#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Positive numbers in the array: ");
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nNegative numbers in the array: ");
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
