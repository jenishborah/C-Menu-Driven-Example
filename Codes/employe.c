#include <stdio.h>

int main() {
    int id;
    char name[50];
    float salary;
    int choice;
    int record_created = 0; 
    do {
        printf("\nMenu\n");
        printf("1. Create Record\n");
        printf("2. Display Record\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter ID: ");
                scanf("%d", &id);
                printf("Enter Name: ");
                scanf("%s", name);
                printf("Enter Salary: ");
                scanf("%f", &salary);
                record_created = 1;  
                break;
            case 2:
                if (record_created) {  
                    printf("\nRecord:\n");
                    printf("ID: %d\n", id);
                    printf("Name: %s\n", name);
                    printf("Salary: %.2f\n", salary);
                } else {
                    printf("\nNo record created yet. Please choose option 1 to create a record.\n");
                }
                break;
            case 3:
                printf("\nExiting the program.\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    } while (choice != 3);
    
    return 0;
}
