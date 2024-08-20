#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5, total;
    float percentage;

    // Input marks for 5 subjects
    printf("Enter marks for subject 1: ");
    scanf("%d", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &subject3);
    printf("Enter marks for subject 4: ");
    scanf("%d", &subject4);
    printf("Enter marks for subject 5: ");
    scanf("%d", &subject5);


    total = subject1 + subject2 + subject3 + subject4 + subject5;

    percentage = (float)total / 5;

    if (percentage >= 75)
     {
        printf("\nDistinction");
    } else if (percentage >= 60)
     {
        printf("\nFirst class");
    } else if (percentage >= 50)
     {
        printf("\nSecond class");
    } else if (percentage >= 35) {
        printf("\nPass class");
    } else {
        printf("Fail\n");
    }

}
