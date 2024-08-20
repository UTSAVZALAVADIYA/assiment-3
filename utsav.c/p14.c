#include <stdio.h>

void main() {
    int arr[5], i, position, element;

    printf("\nEnter 5 elements:");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element : ");
    scanf("%d", &position);

    if (position < 1 || position > 5) {
        printf("\nInvalid position!");
    } else {
        element = arr[position - 1];
        printf("\nThe element at position %d is: %d", position, element);
    }

}
