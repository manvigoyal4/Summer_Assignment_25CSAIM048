//WAP TO CREATE STUDENT RECORD MANAGEMENT SYSTEM.
#include <stdio.h>

int main()
{
    int rollNo;
    char name[50];
    float marks;

    printf("=====================================\n");
    printf("   STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("=====================================\n");

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    // Display student details
    printf("\n========== STUDENT RECORD ==========\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    // Display Grade
    if (marks >= 90)
        printf("Grade       : A+\n");
    else if (marks >= 80)
        printf("Grade       : A\n");
    else if (marks >= 70)
        printf("Grade       : B\n");
    else if (marks >= 60)
        printf("Grade       : C\n");
    else if (marks >= 50)
        printf("Grade       : D\n");
    else
        printf("Grade       : F (Fail)\n");

    return 0;
}