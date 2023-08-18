#include <stdio.h>

int main() {
    int arr[10];
    int i;

    printf("Enter 10 elements:");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Even elements in the array: ");
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}