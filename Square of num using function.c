//  WAP in C to find the square of any number using the function.


#include <stdio.h>

int square(int num);

int main() {
    int number, result;

    printf("Enter any number: ");
    scanf("%d", &number);

    result = square(number);

    printf("Square of %d is: %d\n", number, result);

    return 0;
}

int square(int num) {
    return num * num;
}
