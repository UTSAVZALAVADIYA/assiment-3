#include <stdio.h>

int reverse(int num, int rev) {
    if (num == 0) {
        return rev;
    } else {
        return reverse(num / 10, rev * 10 + num % 10);
    }
}

int is_palindrome(int num) {
    int rev = reverse(num, 0);
    return num == rev;
}

void  main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

}
