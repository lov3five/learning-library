#include<stdio.h>

int main() {
    
    int number = 10;

    int *p; // Khai báo con trỏ p, p là biến lưu trữ địa chỉ của biến khác
    p = &number;

    printf("&p = %d", &p);
    printf("\n&number = %d", &number);

    printf("\n\nOutput: %d", p);
    printf("\nOutput: %d", *p);

    int **p1 = &p; // Trỏ trỏ
    printf("\n\nOutput: %d", p1); // p1 = Địa chỉ bộ nhớ của biến p == &p
    printf("\nOutput: %d", *p1); // = Giá trị của p == địa chỉ của number == &number
    printf("\nOutput: %d", **p1); // = Giá trị của number == number == 10

    int ***p2 = &p1; // Trỏ trỏ trỏ
    printf("\n\nOutput: %d", p2); // = Địa chỉ của p1 == &p1
    printf("\nOutput: %d", *p2); // = Giá trị của p1 == &p
    printf("\nOutput: %d", **p2); // = Giá trị của p == &number
    printf("\nOutput: %d", ***p2); // = Giá trị của number == number == 10
}
