#include <stdio.h>

int main() {
    int d, y, w, r;   
    printf("Enter the number of days: ");
    scanf("%d", &d);
    y = d / 365;
    w = (d % 365) / 7;
    r = (d % 365) / 7;
    printf("%d days is equivalent to %d years, %d weeks, and %d days.", d, y, w, r);
  return 0;
}