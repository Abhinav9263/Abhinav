#include <stdio.h>

int main() {
    int number, swappedNumber;
    int tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99) {
        printf("Please enter a valid two-digit number.\n");
        return 1;
    }

    tens = number / 10;
    ones = number % 10;
    swappedNumber = ones * 10 + tens;

    printf("Swapped number: %d\n", swappedNumber);

    return 0;
}
