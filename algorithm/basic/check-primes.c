#include <stdio.h>
#include <stdbool.h>

// Check if a number is prime
bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    // Use division check for odd numbers from 3 to the square root of 'number'
    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int choice;

    while (1)
    {
        int number;
        printf("\n\n");
        printf("Dev by NakerVN - github.com/lov3five\n");
        printf("Menu options:\n");
        printf("[1] Check prime number\n");
        printf("[0] Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            
            printf("Enter the number to check: ");
            scanf("%d", &number);

            if (isPrime(number))
            {
                printf("It is a prime number.\n");
            }
            else
            {
                printf("It is not a prime number.\n");
            }
            break;

        case 0:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
