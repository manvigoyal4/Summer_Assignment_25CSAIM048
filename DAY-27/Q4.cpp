//WAPTO CREATE MARKSHEET GENERATION SYSTEM.
#include <stdio.h>

int main()
{
    char name[50];
    int rollNo;
    float english, maths, science, computer, hindi;
    float total, percentage;

    printf("=====================================\n");
    printf("     MARKSHEET GENERATION SYSTEM\n");
    printf("=====================================\n");

    // Input Student Details
    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Marks in English: ");
    scanf("%f", &english);

    printf("Enter Marks in Maths: ");
    scanf("%f", &maths);

    printf("Enter Marks in Science: ");
    scanf("%f", &science);

    printf("Enter Marks in Computer: ");
    scanf("%f", &computer);

    printf("Enter Marks in Hindi: ");
    scanf("%f", &hindi);

    // Calculate Total and Percentage
    total = english + maths + science + computer + hindi;
    percentage = total / 5;

    // Display Marksheet
    printf("\n=====================================\n");
    printf("             MARKSHEET\n");
    printf("=====================================\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);
    printf("-------------------------------------\n");
    printf("English      : %.2f\n", english);
    printf("Maths        : %.2f\n", maths);
    printf("Science      : %.2f\n", science);
    printf("Computer     : %.2f\n", computer);
    printf("Hindi        : %.2f\n", hindi);
    printf("-------------------------------------\n");
    printf("Total Marks  : %.2f / 500\n", total);
    printf("Percentage   : %.2f%%\n", percentage);

    // Grade
    if (percentage >= 90)
        printf("Grade        : A+\n");
    else if (percentage >= 80)
        printf("Grade        : A\n");
    else if (percentage >= 70)
        printf("Grade        : B\n");
    else if (percentage >= 60)
        printf("Grade        : C\n");
    else if (percentage >= 50)
        printf("Grade        : D\n");
    else
        printf("Grade        : F (Fail)\n");

    return 0;
}