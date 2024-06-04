#include <stdio.h>

void findMax(int *a, int *b, int *max) {
    if (*a > *b) {
        *max = *a;
    } else {
        *max = *b;
    }
}

int main() {
    int c, d, max;
    
    printf("Enter first number: ");
    scanf("%d", &c);
    
    printf("Enter second number: ");
    scanf("%d", &d);
    
    findMax(&c, &d, &max);
    
    printf("The maximum of %d and %d is %d\n", c, d, max);
    
    return 0;
}