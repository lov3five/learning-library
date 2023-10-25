#include<stdio.h>

int exponetial(int number_base,int number_index) {
    int result = 1;
    for (int i = 1; i <= number_index; i++){
        result *= number_base;
    }
    return result;
}

int main(){
    int coso, somu;

    printf("Enter number_base (co so): ");
    scanf("%d", &coso);
    printf("Nhap number_index (so mu): ");
    scanf("%d", &somu);
    printf("Result of program: %d", exponetial(coso, somu));
    return 0;
}