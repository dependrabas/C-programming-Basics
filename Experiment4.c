//Write a c program to enter 10 elements and find the minimum and maximum in the Array.
#include <stdio.h>
int main() {
    int arr[10]; // declare an array of size 10
    int i;
    int max, min;
    printf("Enter 10 integers:\n");
    // take input from user and store in array
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    // initialize max and min variables with first element of array
    max = arr[0];
    min = arr[0];
    
    // iterate over array to find max and min values
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);
    
    return 0;
}