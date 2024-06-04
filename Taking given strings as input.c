// WAP in C by taking given strings as input and use following functions.
       //       str1[50] = “Good Morning”   ,  str2[50] = “Students”
// I). strcat ()   II). strlen ()   III). strrev ()   IV). strcpy ()   V). strcmp ()

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Good Morning";
    char str2[50] = "Students";
    char temp[50];

    strcat(str1, " ");
    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    printf("Length of str1: %lu\n", strlen(str1));

    strcpy(temp, str1);
    printf("Copied string: %s\n", temp);

    printf("Comparison result: %d\n", strcmp(str1, str2));

    printf("Reversed str1: %s\n", strrev(str1));

    return 0;
}
