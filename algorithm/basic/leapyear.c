#include <stdio.h>
#include <stdbool.h>

/* Năm nhuận là năm chia hết cho 4, trường hợp nếu vừa chia hết cho 4 vừa chia hết cho 100
 thì nó phải chia hết cho 400 thì mới gọi là năm nhuận. */
bool isLeapYear(int year){
    if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0) {
        return true;
    } else return false;

}

int main() {
    int year_input;

    printf("Enter year to check leap year: ");
    scanf("&d", &year_input);
    if(isLeapYear(year_input)){
        printf("Is leapyear!!!");
    } else printf("Is not leapyear :)");

    return 0;
}
