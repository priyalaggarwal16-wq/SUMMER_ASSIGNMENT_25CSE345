#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank customer;
    int choice, accountCreated = 0;
    float amount;

    do {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display Account Details\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &customer.accNo);

            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", customer.name);

            printf("Enter Initial Balance: ");
            scanf("%f", &customer.balance);

            accountCreated = 1;
            printf("Account Created Successfully!\n");
            break;

        case 2:
            if (!accountCreated) {
                printf("Please create an account first.\n");
                break;
            }

            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            customer.balance += amount;
            printf("Amount Deposited Successfully.\n");
            break;

        case 3:
            if (!accountCreated) {
                printf("Please create an account first.\n");
                break;
            }

            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if (amount <= customer.balance) {
                customer.balance -= amount;
                printf("Withdrawal Successful.\n");
            } else {
                printf("Insufficient Balance.\n");
            }
            break;

        case 4:
            if (!accountCreated) {
                printf("Please create an account first.\n");
                break;
            }

            printf("Current Balance: %.2f\n", customer.balance);
            break;

        case 5:
            if (!accountCreated) {
                printf("Please create an account first.\n");
                break;
            }

            printf("\n--- Account Details ---\n");
            printf("Account Number : %d\n", customer.accNo);
            printf("Account Holder : %s\n", customer.name);
            printf("Balance         : %.2f\n", customer.balance);
            break;

        case 6:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}