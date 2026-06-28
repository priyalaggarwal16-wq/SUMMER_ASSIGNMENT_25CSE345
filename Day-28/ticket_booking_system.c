#include <stdio.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int seats;
    int booked;   // 0 = Not Booked, 1 = Booked
};

int main() {
    struct Ticket t;
    int choice;

    t.booked = 0;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (t.booked == 1) {
                printf("Ticket already booked.\n");
            } else {
                printf("Enter Ticket Number: ");
                scanf("%d", &t.ticketNo);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t.name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t.seats);

                t.booked = 1;
                printf("Ticket Booked Successfully!\n");
            }
            break;

        case 2:
            if (t.booked == 1) {
                t.booked = 0;
                printf("Ticket Cancelled Successfully!\n");
            } else {
                printf("No ticket booked.\n");
            }
            break;

        case 3:
            if (t.booked == 1) {
                printf("\n--- Ticket Details ---\n");
                printf("Ticket Number : %d\n", t.ticketNo);
                printf("Passenger Name: %s\n", t.name);
                printf("Seats         : %d\n", t.seats);
            } else {
                printf("No ticket booked.\n");
            }
            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}