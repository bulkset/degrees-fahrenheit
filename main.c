#include <stdio.h>

// Function prototypes
int degreesToFahrenheit(int degrees);
int fahrenheitToDegrees(int fahrenheit);

int main()
{
    int choice, input, result;

    printf("Welcome to the temperature conversion app!\n");
    printf("1. Degrees to Fahrenheit\n");
    printf("2. Fahrenheit to Degrees\n");
    printf("Choose what you want to convert: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the number of degrees: ");
        scanf("%d", &input);
        result = degreesToFahrenheit(input);
        printf("%d degrees in Fahrenheit = %d\n", input, result);
    }
    else if (choice == 2)
    {
        printf("Enter the number of Fahrenheit: ");
        scanf("%d", &input);
        result = fahrenheitToDegrees(input);
        printf("%d Fahrenheit in degrees = %d\n", input, result);
    }
    else
    {
        printf("Choice must be 1 or 2\n");
    }

    return 0;
}

int degreesToFahrenheit(int degrees)
{
    return (degrees * 9 / 5) + 32;
}

int fahrenheitToDegrees(int fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
