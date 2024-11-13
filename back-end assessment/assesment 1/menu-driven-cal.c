#include <stdio.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;
    
    while (1) {
        // Display menu
        
        
        printf("\n--- Menu Driven Calculator ---\n");
        printf("Select an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter choice (1/2/3/4/5): ");
        
        // Get user choice
        scanf("%d", &choice);

        // Exit if user chooses 5
        if (choice == 5) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        // Get user input for numbers if choice is valid
        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);

            // Perform the chosen operation
            switch (choice) {
                case 1:
                    result = add(num1, num2);
                    printf("The result is: %.2f\n", result);
                    break;
                case 2:
                    result = subtract(num1, num2);
                    printf("The result is: %.2f\n", result);
                    break;
                case 3:
                    result = multiply(num1, num2);
                    printf("The result is: %.2f\n", result);
                    break;
                case 4:
                    if (num2 == 0) {
                        printf("Error! Division by zero.\n");
                    } else {
                        result = divide(num1, num2);
                        printf("The result is: %.2f\n", result);
                    }
                    break;
            }
        } else {
            printf("Invalid input! Please enter a valid choice.\n");
        }
    }
    
    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

