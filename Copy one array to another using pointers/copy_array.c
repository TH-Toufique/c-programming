#include <stdio.h>

int main() {
    int array_1[10]; // Array for taking input the elements
    int array_2[10]; // Array for holding copied elements
    int num; // For holding the array length
    int *ptr_1 = array_1; // Assining array_1 memory address in ptr_1
    int *ptr_2 = array_2; // Assining array_2 memory address in ptr_2

    printf("Enter the element length you want to use: \n");
    scanf("%d",&num);
    printf("Enter the elements: \n");

    // Copying elements from source to target array using pointers
    for (int i = 0; i < num; i++) 
    {
        scanf("%d", &array_1[i]);
        *ptr_2++ = *ptr_1++;
    }

    // Printing the elements of the target array to verify the copy
    printf("\nElements of the target array after copying:\n");
    for (int i = 0; i < num; i++) {
        printf("%d\n", array_2[i]);
    }
    printf("\n");

    return 0;
}
