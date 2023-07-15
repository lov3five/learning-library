#include <stdio.h>

/*
UCLN(a, b) == b if (a mod b) == 0
UCLN(a, b) == UCLN(b, a mod b) if a mod b != 0
 */
int UCLN(int number1, int number2)
{
    if (number2 == 0)
        return number1;
    return UCLN(number2, number1 % number2);
}

int main()
{
    int a = 2;
    int b = 12;
    printf("UCLN: %d", UCLN(a, b));

    return 0;
}