#include <stdio.h>

void createFile() {
    char fileName[100];
    printf("Enter the file name: ");
    scanf("%s", fileName);
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Error creating the file.\n");
    } else {
        printf("File created successfully.\n");
        fclose(file);
    }
}

void readFile() {
    char fileName[100];
    printf("Enter the file name: ");
    scanf("%s", fileName);
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
    } else {
        printf("Contents of %s:\n", fileName);
        char ch;
        while ((ch = fgetc(file)) != EOF) {
            printf("%c", ch);
        }
        printf("\n");
        fclose(file);
    }
}

void writeFile() {
    char fileName[100];
    printf("Enter the file name: ");
    scanf("%s", fileName);
    FILE *file = fopen(fileName, "a");
    if (file == NULL) {
        printf("Error opening the file.\n");
    } else {
        char data[100];
        printf("Enter the data to write: ");
        scanf(" %[^\n]", data);
        fprintf(file, "%s\n", data);
        printf("Data written successfully.\n");
        fclose(file);
    }
}

void deleteFile() {
    char fileName[100];
    printf("Enter the file name: ");
    scanf("%s", fileName);
    int status = remove(fileName);
    if (status == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Error deleting the file.\n");
    }
}

int main() {
    int choice;
    
    do {
        // Display the menu
        printf("Menu:\n");
        printf("1. Create File\n");
        printf("2. Read File\n");
        printf("3. Write to File\n");
        printf("4. Delete File\n");
        printf("5. Exit\n");
        
        // Get the user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Perform the chosen operation
        switch (choice) {
            case 1: // Create File
                createFile();
                break;
                
            case 2: // Read File
                readFile();
                break;
                
            case 3: // Write to File
                writeFile();
                break;
                
            case 4: // Delete File
                deleteFile();
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
