#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c;
    int choice, added = 0;
    char searchName[50];

    do {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", c.name);

            printf("Enter Phone Number: ");
            scanf("%s", c.phone);

            printf("Enter Email: ");
            scanf("%s", c.email);

            added = 1;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (added) {
                printf("\n--- Contact Details ---\n");
                printf("Name  : %s\n", c.name);
                printf("Phone : %s\n", c.phone);
                printf("Email : %s\n", c.email);
            } else {
                printf("No contact available.\n");
            }
            break;

        case 3:
            if (!added) {
                printf("No contact available.\n");
                break;
            }

            printf("Enter Name to Search: ");
            scanf(" %[^\n]", searchName);

            if (strcmp(c.name, searchName) == 0) {
                printf("\nContact Found!\n");
                printf("Name  : %s\n", c.name);
                printf("Phone : %s\n", c.phone);
                printf("Email : %s\n", c.email);
            } else {
                printf("Contact Not Found.\n");
            }
            break;

        case 4:
            if (added) {
                added = 0;
                printf("Contact Deleted Successfully!\n");
            } else {
                printf("No contact to delete.\n");
            }
            break;

        case 5:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}