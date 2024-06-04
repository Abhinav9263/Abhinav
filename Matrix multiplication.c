//  WAP in C to find matrix multiplication.


#include <stdio.h>

#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

int main() {
    int mat1[ROW1][COL1], mat2[ROW2][COL2], result[ROW1][COL2];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < ROW2; i++) {
        for (int j = 0; j < COL2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COL1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
      printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
