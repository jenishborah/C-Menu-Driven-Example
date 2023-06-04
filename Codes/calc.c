#include <stdio.h>

int main() {
    int choice;
    int num1, num2;
    int result;
    
    do {
        // Display the menu
        printf("Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        
        // Get the user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Perform the chosen operation
        switch (choice) {
            case 1: // Addition
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 + num2;
                printf("Result: %d\n", result);
                break;
                
            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 - num2;
                printf("Result: %d\n", result);
                break;
                
            case 3: // Multiplication
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 * num2;
                printf("Result: %d\n", result);
                break;
                
            case 4: // Division
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
                
            case 5: // Exit
                printf("Exiting the program.\n");
                break;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        printf("\n");
        
    } while (choice != 5);
    
    return 0;
}
