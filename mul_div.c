#include <xc.h>
#include <stdio.h>
#include <pic18f4550.h>

// Function prototypes
void multiplyNumbers(void);
void divideNumbers(void);
void performMultiplication(int num1, int num2);
void performDivision(int num1, int num2);

// Main program
int main(void)
{
    int choice, num1, num2;

    // Configure microcontroller settings and ports
    TRISB = 0x00; // Set Port B as output

    while (1)
    {
        // Display menu options
        printf("Menu:\n");
        printf("1. Multiply two  numbers\n");
        printf("2. Divide two  numbers\n");
        printf("Enter your choice: ");

        // Read user choice
        scanf("%u", &choice);

        switch (choice)
        {
        case 1:
            multiplyNumbers();
            break;
        case 2:
            divideNumbers();
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to multiply two  numbers
void multiplyNumbers(void)
{
    int num1, num2;

    printf("Enter the first  number: ");
    scanf("%d", &num1);

    printf("Enter the second  number: ");
    scanf("%d", &num2);

    performMultiplication(num1, num2);
}

// Function to divide two  numbers
void divideNumbers(void)
{
    int num1, num2;

    printf("Enter the first  number: ");
    scanf("%d", &num1);

    printf("Enter the second  number: ");
    scanf("%d", &num2);

    if (num2 == 0)
    {
        printf("Error: Division by zero!\n");
        return;
    }

    performDivision(num1, num2);
}

// Function to perform multiplication
void performMultiplication(int num1, int num2)
{
    int result = (int)num1 * num2;

    printf("Result: %d\n", result);

    PORTB = result; // Display result on Port B LEDs (assuming LEDs are connected to Port B)
}

// Function to perform division
void performDivision(int num1, int num2)
{
    int quotient = num1 / num2;
    int remainder = num1 % num2;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    PORTB = quotient; // Display quotient on Port B LEDs (assuming LEDs are connected to Port B)
}
