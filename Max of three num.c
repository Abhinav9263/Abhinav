#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Maximum of the three numbers is: %d\n", max);

    return 0;
}