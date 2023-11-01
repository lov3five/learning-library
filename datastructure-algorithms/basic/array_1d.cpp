#include<iostream>
using namespace std;

// Function to input values into an array from the keyboard
void importArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

// Function to print the values in the array to the screen
void exportArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

// Function to request the user to input an integer, representing an index of an element in the array
int enterIndexNumber() {
    int n;
    printf("Enter index number of array: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int array[100];

    int index_number = enterIndexNumber();
    
    printf("Import array: \n");
    importArray(array, index_number);

    printf("\nExport array: ");
    exportArray(array, index_number);

    return 0;
}