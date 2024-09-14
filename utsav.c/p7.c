#include <stdio.h>

int main() {
    int choice;
    float base, height, length, breadth, radius, pi = 3.14159;

    printf("Choose the shape whose area you want to calculate:\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area of the triangle: %.2f\n", 0.5 * base * height);
            break;
        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            printf("Area of the rectangle: %.2f\n", length * breadth);
            break;
        case 3:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of the circle: %.2f\n", pi * radius * radius);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
