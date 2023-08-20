#include <stdio.h>
#include <string.h>

void bubbleSort(char names[][100], int n) {
    int i, j;
    char temp[100];
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int i, n;
    
    printf("Enter the number of names to short: ");
    scanf("%d", &n);
    
    char names[n][100];
    
    for (i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
    
    bubbleSort(names, n);
    
    printf("\nSorting names in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}