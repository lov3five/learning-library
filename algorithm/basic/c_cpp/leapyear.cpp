#include <stdio.h>
#include <stdbool.h>

/* Năm nhuận là năm chia hết cho 4, trường hợp nếu vừa chia hết cho 4 vừa chia hết cho 100
 thì nó phải chia hết cho 400 thì mới gọi là năm nhuận. */
bool isLeapYear(int year)
{
    if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int year_input;

    do {
        printf("Enter year to check leap year (or enter 0 to exit): ");
        scanf("%d", &year_input);

        if (year_input == 0) {
            break; // Kết thúc chương trình nếu người dùng nhập 0
        }

        if (isLeapYear(year_input)) {
            printf("%d is a leap year!\n", year_input);
        } else {
            printf("%d is not a leap year.\n", year_input);
        }
    } while (1);

    //return 0;
}
