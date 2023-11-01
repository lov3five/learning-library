#include<stdio.h>

int main() {
    
    int b = 10;
    int arr[5] = {1,2,3,4,5};
    int a = 11;

    printf("a = %d\n", (void*)&a); 
    printf("====================");

    printf("\nb = %d\n", (void*)&b);    
    printf("====================\n");

    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, (void*)&arr[i]);
    }
    return 0;
}
