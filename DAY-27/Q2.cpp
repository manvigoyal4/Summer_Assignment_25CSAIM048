//WAP TO CREATE EMPLOYEE MANAGEMENT SYSTEM.
#include <stdio.h>

int main()
{
    int empId;
    char empName[50];
    float basicSalary, hra, da, grossSalary;

    printf("=====================================\n");
    printf("     EMPLOYEE MANAGEMENT SYSTEM\n");
    printf("=====================================\n");

    // Input Employee Details
    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", empName);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA, DA and Gross Salary
    hra = basicSalary * 0.20;   // 20% HRA
    da = basicSalary * 0.10;    // 10% DA
    grossSalary = basicSalary + hra + da;

    // Display Employee Details
    printf("\n========== EMPLOYEE DETAILS ==========\n");
    printf("Employee ID   : %d\n", empId);
    printf("Employee Name : %s\n", empName);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", grossSalary);

    return 0;
}