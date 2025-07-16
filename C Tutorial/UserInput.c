#include <stdio.h> 
int main() { 

// Create an integer variable that will store the number we get from the user
int myNum;

// Ask the user to type a number
printf("Type a number: \n");

// Get and save the number the user types
scanf("%d", &myNum);

// Output the number the user typed
printf("Your number is: %d", myNum);




char firstName[30];
// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
scanf("%s", firstName);

// Output the text
printf("Hello %s", firstName);




//Memory Address
//When a variable is created in C, a memory address is assigned to the variable.
//The memory address is the location of where the variable is stored on the computer.
//When we assign a value to the variable, it is stored in this memory address.
//To access it, use the reference operator (&), and the result represents where the variable is stored:
int myAge = 43;
printf("%p", &myAge); // Outputs 0x7ffe5367e044



//******************** Creating Pointers*******************/

//A pointer is a variable that stores the memory address of another variable as its value.
//A pointer variable points to a data type (like int) of the same type, and is created with the * operator.
//The address of the variable you are working with is assigned to the pointer:

int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);




    return 0;            
}