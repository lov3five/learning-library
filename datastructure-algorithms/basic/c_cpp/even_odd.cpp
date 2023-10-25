#include <stdio.h>
#include <stdbool.h>

bool isEvenNumber(int number) {
    if (number % 2 == 0)
        return true;
    return false;
}

int main() {
    int number_input;

    printf("Enter number to check even/odd: ");
    scanf("%d", &number_input);
    if(isEvenNumber(number_input)){
        printf("%d is even number!", number_input);
    }
    else printf("%d is odd number!", number_input);

    return 0;
}