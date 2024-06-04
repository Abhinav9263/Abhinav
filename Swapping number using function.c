// WAP in C to swap two numbers using a function.

#include <stdio.h>

void swap(int *x, int *y);

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping, a = %d and b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping, a = %d and b = %d\n", a, b);

    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
