#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float mean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

float standardDeviation(int arr[], int size) {
    float MeanValue = mean(arr, size);
    float SquaredDifference = 0;
    for (int i = 0; i < size; i++) {
        SquaredDifference += pow(arr[i] - MeanValue, 2);
    }
    return sqrt(SquaredDifference / size);
}

int main() {
    int arr[] = { 3, 6, 10, 8, 2, 7, 5, 1, 4, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);

    float MeanValue = mean(arr, size);
    float DeviationValue = standardDeviation(arr, size);

    printf("The mean of this array is %.2f\n", MeanValue);
    printf("The standard deviation of this array is %.2f\n", DeviationValue);

    return 0;
}
