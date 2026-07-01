//WAP TO CREATE SALARY MANAGEMENT SYSTEM.
#include <stdio.h>

int main()
{
    int empId;
    char empName[50];
    float basicSalary, hra, da, pf, grossSalary, netSalary;

    printf("=====================================\n");
    printf("      SALARY MANAGEMENT SYSTEM\n");
    printf("=====================================\n");

    // Input Employee Details
    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", empName);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Salary Calculation
    hra = basicSalary * 0.20;      // 20% HRA
    da = basicSalary * 0.10;       // 10% DA
    pf = basicSalary * 0.05;       // 5% PF Deduction

    grossSalary = basicSalary + hra + da;
    netSalary = grossSalary - pf;

    // Display Salary Details
    printf("\n========== SALARY DETAILS ==========\n");
    printf("Employee ID    : %d\n", empId);
    printf("Employee Name  : %s\n", empName);
    printf("Basic Salary   : %.2f\n", basicSalary);
    printf("HRA (20%%)      : %.2f\n", hra);
    printf("DA (10%%)       : %.2f\n", da);
    printf("PF (5%%)        : %.2f\n", pf);
    printf("Gross Salary   : %.2f\n", grossSalary);
    printf("Net Salary     : %.2f\n", netSalary);

    return 0;
}