#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100] = "Hello";
    char str4[100] = "World";
    char str5[100] = "This is a test string.";
    char str6[100] = "This is a test string.";

    strcat(str1, str2);
    printf("strcat(): %s\n", str1);

    int result = strcmp(str3, str4);
    printf("strcmp(): %d\n", result);

    strcpy(str3, str4);
    printf("strcpy(): %s\n", str3);

    strncat(str5, str4, 5);
    printf("strncat(): %s\n", str5);

    result = strncmp(str5, str6, 5);
    printf("strncmp(): %d\n", result);

    strncpy(str5, str6, 5);
    printf("strncpy(): %s\n", str5);

    int length = strlen(str5);
    printf("strlen(): %d\n", length);

    char* substring = strstr(str6, "test");
    if (substring != NULL) {
        printf("strstr(): %s\n", substring);
    } else {
        printf("strstr(): Substring not found.\n");
    }

    return 0;
}