#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;  
 };

struct Book library[MAX];
int count = 0;


void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &library[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", library[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", library[count].author);

    library[count].issued = 0;
    count++;

    printf("Book Added Successfully!\n");
}

void displayBooks() {
    if (count == 0) 
    {
        printf("\nNo books available.\n");
        return;
    }

    printf("\nLibrary Books:\n");
    printf("---------------------------------------------------------\n");
    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
    printf("---------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n",
               library[i].id,
               library[i].title,
               library[i].author,
               library[i].issued ? "Issued" : "Available");
    }
}

void searchBook() {
    int id, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            printf("\nBook Found!\n");
            printf("Title : %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Status: %s\n",
                   library[i].issued ? "Issued" : "Available");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found.\n");
}

void issueBook() {
    int id;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (library[i].issued == 0) {
                library[i].issued = 1;
                printf("Book Issued Successfully!\n");
            } else {
                printf("Book is already issued.\n");
            }
            return;
        }
    }

    printf("Book not found.\n");
}


void returnBook() {
    int id;

    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (library[i].issued == 1) {
                library[i].issued = 0;
                printf("Book Returned Successfully!\n");
            } else {
                printf("Book was not issued.\n");
            }
            return;
        }
    }

    printf("Book not found.\n");
}


int main() {
    int choice;

    do {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}