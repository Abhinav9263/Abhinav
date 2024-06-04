// WAP in C to concatenate the following array.
 //    str1[50] = “Good Morning”     str2[50] = “Students”

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Good Morning";
    char str2[50] = "Students";

    strcat(str1, " ");
    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
