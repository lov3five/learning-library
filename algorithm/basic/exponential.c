#include<stdio.h>

int luythua(int number_base,int number_index) {
    int result = 1;
    for (int i = 1; i <= number_index; i++){
        result *= number_base;
    }
    return result;
}

int main(){
    int coso, somu;

    printf("Nhap co so: ");
    scanf("%d", &coso);
    printf("Nhap so mu: ");
    scanf("%d", &somu);
    printf("Ket qua chuong trinh: %d", luythua(coso, somu));
    return 0;
}