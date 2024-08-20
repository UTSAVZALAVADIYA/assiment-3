#include <stdio.h>

void copy_string(char *dest, char *src) {
  for (int i = 0; src[i] != '\0'; i++) {
    dest[i] = src[i];
  }
}

void main() {
  char str1[] = "Hello World";
  char str2[100];

  copy_string(str2, str1);

  printf("Copied string: %s\n", str2);

}

