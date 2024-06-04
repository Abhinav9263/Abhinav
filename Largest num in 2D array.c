// WAP in C to find largest number in 2D array.

#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS];
    int largest;

    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    largest = arr[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    printf("The largest number in the 2D array is: %d\n", largest);

    return 0;
}
