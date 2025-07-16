#include <stdio.h>       
int main() {   
// Variables are containers for storing data values, like numbers and characters.
// In C, there are different types of variables (defined with different keywords), for example: int , float , char


int myNum = 15;  //Create a variable called myNum of type int and assign the value 15 to it:
printf(myNum);  // Nothing happens


//You can also declare a variable without assigning the value, and assign the value later:
// Declare a variable
int muVal;
// Assign a value to the variable
muVal = 15;

//*********************************************** */

//          C Format Specifiers

// Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.
// A format specifier starts with a percentage sign %, followed by a character.
// For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function:
int val = 55;
printf("%d", val);  // Outputs 55


//To print other types, use %c for char and %f for float:
// Create variables
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character
// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

//To combine both text and a variable, separate them with a comma inside the printf() function:
int myNum = 15;
printf("My favorite number is: %d", myNum);

printf("My number is %d and my letter is %c", myNum, myLetter); //To print different types in a single printf() function, you can use the following:

//You can also just print a value without storing it in a variable, as long as you use the correct format specifier:
printf("My favorite number is: %d", 15);
printf("My favorite letter is: %c", 'D');


//Change Variable Values
//If you assign a new value to an existing variable, it will overwrite the previous value:
int jk = 15;  // jk is 15
jk = 10;  // Now jk is 10


//You can also assign the value of one variable to another:
int myNum = 15;
int myOtherNum = 23;
// Assign the value of myOtherNum (23) to myNum
myNum = myOtherNum;
// myNum is now 23, instead of 15
printf("%d", myNum);


//To add a variable to another variable, you can use the + operator:
int x = 5;
int y = 6;
int sum = x + y;
printf("%d", sum);


//Declare Multiple Variables
//To declare more than one variable of the same type, use a comma-separated list:
int x = 5, y = 6, z = 50;
printf("%d", x + y + z);

  return 0;
}





