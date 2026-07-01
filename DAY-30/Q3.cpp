//WAP TO CREATE MINI EMPLOYEE MANAGEMENT SYSTEM.
#include<stdio.h>
int main ()
{
    int empId[100], age[100];
    char name[100][50];
    float salary[100];
    int n, i;

    printf("=====================================\n");
    printf("    MINI EMPLOYEE MANAGEMENT SYSTEM\n");
    printf("=====================================\n");

    // Input number of employees
    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Age: ");
        scanf("%d", &age[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee records
    printf("\n=====================================\n");
    printf("         EMPLOYEE RECORDS\n");
    printf("=====================================\n");

    printf("Emp ID\tName\t\tAge\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s%d\t%.2f\n", empId[i], name[i], age[i], salary[i]);
    }

    return 0;
}
