#include <stdio.h>   // standard i/o library
#include <stdlib.h>    // memory allocation function library
int main() {              // code written in main function will be executed
    // declare a variable
    int value;
    // read a value from the keyboard
    printf("Enter a num:");
    scanf("%d", &value);   // read the value %d-int, %f-decimal, &-stores the %d/f into the memory address of the value
    // u may be need to use scanf_s (secured version)
    // printing the number
    printf("the value stored is : %d", value);
    return 0;            // finished running successfully
} 
