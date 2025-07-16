#include <stdio.h> 
int main() { 

// Create variables
int myNum = 5;             // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);


// Data Type	 Size
// int	         2 or 4 bytes
// float	     4 bytes
// double        8 bytes
// char	         1 byte

int myInt;    
float myFloat;
double myDouble;
char myChar;

printf("%zu\n", sizeof(myInt));
printf("%zu\n", sizeof(myFloat));
printf("%zu\n", sizeof(myDouble));
printf("%zu\n", sizeof(myChar));

//******************************** TYPECASTING***************************

// Automatic conversion: int to float
float myFloat = 9;
printf("%f", myFloat); // 9.000000


// Automatic conversion: float to int
int myInt = 9.99;
printf("%d", myInt); // 9



float sum = 5 / 2;
printf("%f", sum); // 2.000000


// Manual conversion: int to float
float sum = (float) 5 / 2;
printf("%f", sum); // 2.500000



int num1 = 5;
int num2 = 2;
float sum = (float) num1 / num2;
printf("%.1f", sum); // 2.5



//*********************************** CONSTANTS ************************************* */

//If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
//This will declare the variable as "constant", which means unchangeable and read-only:

const int myNum = 15;  // myNum will always be 15
myNum = 10;           // error: assignment of read-only variable 'myNum'



       return 0;            
}