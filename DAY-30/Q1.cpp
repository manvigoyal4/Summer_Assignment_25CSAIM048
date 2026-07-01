//WAP TO CREATE STUDENT RECORD SYSTEM USING ARRAYS AND STRINGS.
#include <stdio.h>

int main()
{
    int roll[100], i, n;
    char name[100][50];
    float marks[100];

    printf("=====================================\n");
    printf("      STUDENT RECORD SYSTEM\n");
    printf("=====================================\n");

    // Input number of students
    printf("Enter Number of Students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display student records
    printf("\n=====================================\n");
    printf("         STUDENT RECORDS\n");
    printf("=====================================\n");

    printf("Roll No\tName\t\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}