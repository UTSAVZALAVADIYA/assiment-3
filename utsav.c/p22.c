#include <stdio.h>

void concatenateStrings(char *dest, const char *src) {
       while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void main() {
    char str1[100], str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
        size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

        concatenateStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);
}
