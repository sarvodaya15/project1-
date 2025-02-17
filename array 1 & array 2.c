#include <stdio.h>

int main() {
    int Array[100];
    int n, i;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &Array[i]);
    }

    for (i = 0; i < n; i++) {
     arr1[i]=arr2[i];
    }

    printf("Copied elements to destination array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
