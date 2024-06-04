#include <stdio.h>

int main() {
    int a, o, r, n = 0, result = 0, temp, p, d, i, j;

    printf("Enter an integer: ");
    scanf("%d", &a);

    o = a;
    temp = a;

    for (d = 0; temp != 0; d++) {
        temp /= 10;
    }
    n = d;

    temp = o;

    for (i = 0; i < d; i++) {
        r = temp % 10;
        temp /= 10;
        
        p = 1;
        for (j = 0; j < n; j++) {
            p *= r;
        }
        
        result += p;
    }

    if (result == a) {
        printf("%d is an Armstrong number.\n", a);
    } else {
        printf("%d is not an Armstrong number.\n", a);
    }

    return 0;
}
