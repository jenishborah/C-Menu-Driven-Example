#include <stdio.h>
#include <string.h>

void stringLength() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    printf("Length of the string: %d\n", length);
}

void stringConcatenation() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

void stringReversal() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
}

int main() {
    int choice;
    
    do {
        // Display the menu
        printf("Menu:\n");
        printf("1. String Length\n");
        printf("2. String Concatenation\n");
        printf("3. String Reversal\n");
        printf("4. Exit\n");
        
        // Get the user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Perform the chosen operation
        switch (choice) {
            case 1: // String Length
                stringLength();
                break;
                
            case 2: // String Concatenation
                stringConcatenation();
                break;
                
            case 3: // String Reversal
                stringReversal();
                break;
                
            case 4: // Exit
                printf("Exiting the program.\n");
                break;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        printf("\n");
        
    } while (choice != 4);
    
    return 0;
}
