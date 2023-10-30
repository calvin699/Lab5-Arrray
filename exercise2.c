#include <stdio.h>

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int a = 0; a < size - i - 1; a++) {
            if (arr[a] > arr[a + 1]) {
                int tem = arr[a];
                arr[a] = arr[a + 1];
                arr[a + 1] = tem;
            }
        }
    }
}

int main() {
    int array[] = { 5, 25, 9, 42, 20, 34, 2, 5, 16 };
    int size = sizeof(array) / sizeof(int);

    printf("The array before sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    sort(array, size);

    printf("The array after sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}