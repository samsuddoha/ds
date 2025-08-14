#include<stdio.h>
# define SIZE 10

int main() {
    int arr[10]; // Declaration of an array of size 10
    int marks[5] = {85, 90, 78, 92, 88}; // Fully initialized
    int scores[5] = {10, 20}; // First two elements assigned, rest set to 0
    int age[]= {25, 30, 35}; // Size inferred from initializer

    // Initializing the array with a loop
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]); // Reading values into the array
    }

    int size = sizeof(arr) / sizeof(arr[0]); // Calculating the size of the array
    printf("index: 2, value: %d\n", arr[2]); // Accessing an element at index 2
    printf("Size of the array: %d\n", size); // Printing the size of the array

    // Printing the elements of the array
    printf("Elements of the array:\n");
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}