//WAP to enter 10 elements and print all event number in the array.
#include <stdio.h>

int main() {
    int arr[10]; // declare an array of size 10
    int i;
    
    printf("Enter 10 integers:\n");
    
    // take input from user and store in array
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Even numbers in the array are:\n");
    
    // iterate over array and print even numbers
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d\n", arr[i]);
        }
    }
    
    return 0;
}




