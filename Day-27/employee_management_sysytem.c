#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Employee Records Found!\n");
            }
            else
            {
                printf("\nEmployee Details:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nSalary: %.2f\n", emp[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found!");
                    printf("\nID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nSalary: %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee Not Found!\n");

            break;

        case 4:
            printf("Enter Employee ID to Update Salary: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("Enter New Salary: ");
                    scanf("%f", &emp[i].salary);
                    printf("Salary Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee Not Found!\n");

            break;

        case 5:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}