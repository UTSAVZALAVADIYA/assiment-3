#include <stdio.h>
void main()
{
    int ch;
    float a, b, c, s, area;
    printf("1. Area of Triangle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n");
    printf("Enter your choice: ");
    scanf(" %d ", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter the sides of triangle: ");
        scanf(" %f%f%f ", &a, &b, &c);
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of triangle = %.3f\n", area);
        break;
    case 2:
        printf("Enter the length and breadth of rectangle: ");
        scanf(" %f%f ", &a, &b);
        area = a * b;
        printf("Area of rectangle = %.3f\n", area);
        break;
    case 3:
        printf("Enter the radius of circle: ");
        scanf(" %f ", &a);
        area = 3.14 * a * a;
        printf("Area of circle = %.3f\n", area);
        break;
    default:
        printf("Invalid choice\n");
    }

}