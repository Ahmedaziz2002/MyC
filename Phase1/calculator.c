#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        exit(1); // Exit with an error code
    }
    return a / b;
}

int multiply(int a, int b) {
    return a * b;
}

void displayMenu() {
    printf("\nWhat operation would you like to perform?\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. DIVIDE\n");
    printf("4. MULTIPLY\n");
    printf("5. EXIT\n");
}

int getIntegerInput(const char *prompt) {
    int value;
    while (1) {
        printf("%s", prompt);
        if (scanf("%d", &value) == 1) {
            // Successfully read an integer
            break;
        } else {
            // Invalid input; clear the buffer
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n'); // Clear the input buffer
        }
    }
    return value;
}

int main() {
    printf("\tWelcome to our basic calculator program\n");

    while (1) {
        int num1, num2, choice;

        printf("Enter the first number: ");
        scanf("%d", &num1);
        
        printf("Enter the second number: ");
        scanf("%d", &num2);
        
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Sum is %d\n", add(num1, num2));
                break;
            case 2:
                printf("Difference is %d\n", subtract(num1, num2));
                break;
            case 3:
                printf("Quotient is %d\n", divide(num1, num2));
                break;
            case 4:
                printf("Product is %d\n", multiply(num1, num2));
                break;
            case 5:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid input. Please try again.\n");
                break;
        }
    }
    
    return 0;
}
