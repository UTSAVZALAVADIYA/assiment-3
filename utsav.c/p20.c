#include <stdio.h>
#include <string.h>
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};
void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("----------------------------\n");
}

void main() {
    struct Employee employees[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        getchar();  
        printf("Employee Name: ");
        fgets(employees[i].empname, sizeof(employees[i].empname), stdin);
        size_t len = strlen(employees[i].empname);
        if (len > 0 && employees[i].empname[len - 1] == '\n') {
            employees[i].empname[len - 1] = '\0';
        }

        printf("Address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        
        len = strlen(employees[i].address);
        if (len > 0 && employees[i].address[len - 1] == '\n') {
            employees[i].address[len - 1] = '\0';
        }

        printf("Age: ");
        scanf("%d", &employees[i].age);
        getchar();  

        printf("----------------------------\n");
    }

        printf("Employee Information:\n");
    for (i = 0; i < 5; i++) {
        printEmployee(employees[i]);
    }

}
