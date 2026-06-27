#include <stdio.h>

struct Salary
{
    int id;
    char name[50];
    float basic, hra, da, deduction, netSalary;
};

int main()
{
    struct Salary emp[100];
    int n = 0, choice, i;

    while (1)
    {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basic);

            printf("Enter HRA: ");
            scanf("%f", &emp[n].hra);

            printf("Enter DA: ");
            scanf("%f", &emp[n].da);

            printf("Enter Deduction: ");
            scanf("%f", &emp[n].deduction);

            emp[n].netSalary = emp[n].basic + emp[n].hra + emp[n].da - emp[n].deduction;

            n++;
            printf("Salary Record Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Records Found!\n");
            }
            else
            {
                printf("\nSalary Details:\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee ID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nBasic Salary: %.2f", emp[i].basic);
                    printf("\nHRA: %.2f", emp[i].hra);
                    printf("\nDA: %.2f", emp[i].da);
                    printf("\nDeduction: %.2f", emp[i].deduction);
                    printf("\nNet Salary: %.2f\n", emp[i].netSalary);
                }
            }
            break;

        case 3:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}