#include <stdio.h>
#include <stdlib.h>

int minimum(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int maximum(int arr[], int size) {
    int biggest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }
    return biggest;
}

float average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int *p;
    int size;

    printf("Input an integer N: ");
    scanf("%d", &size);

    p = (int*)malloc(size * sizeof(int));

    printf("Please input %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &p[i]);
    }

    int min = minimum(p, size);
    int max = maximum(p, size);
    float avg = average(p, size);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.3f\n", avg);

    free(p);
    return 0;
}