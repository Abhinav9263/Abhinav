#include <stdio.h>

void addNumbers(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int c, d, sum;
    
    printf("Enter first number: ");
    scanf("%d", &c);
    
    printf("Enter second number: ");
    scanf("%d", &d);
    
    addNumbers(&c, &d, &sum);
    
    printf("The sum of %d and %d is %d\n", c, d, sum);
    
    return 0;
}