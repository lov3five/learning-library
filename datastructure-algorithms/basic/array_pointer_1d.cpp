#include <iostream>
using namespace std;

/* 
    Function import array with pointer
 */
void importArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        cout << arr+i << " ";
        cin >> *(arr+i);
    }
}

/* 
    Function export array with pointer
 */
void exportArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << *(arr+i) << " ";
    }
}

// Function to request the user to input an integer, representing an index of an element in the array
int enterIndexNumber(){
    int n;
    printf("Enter index number of array_pointer: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int index_number = enterIndexNumber();
    int *array = new int[index_number]; // Assign memory for array

    printf("Import array with pointer: \n");
    importArray(array, index_number); // array == address_memory

    printf("\nExport array with pointer: ");
    exportArray(array, index_number);

    // Free memory after using the array
    delete[] array;

    return 0;
}