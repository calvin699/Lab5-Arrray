#include <stdio.h>
int array_sum(int *arr, int size) {
 /* your code here */
}
int main() {
int array[] = { 1, 2, 3, 4, 5 };
int size = sizeof(array) / sizeof(int);
int sum;
sum = array_sum(array, size);
printf("Sum of the array: %d\n", sum);
return 0;
} 
