#include <stdio.h> 
int main() { 

//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
//To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
//To insert values to it, use a comma-separated list inside curly braces, and make sure all values are of the same data type:

int myNumbers[] = {25, 50, 75, 100};

printf("%d\n", myNumbers[0]); //Access the Elements of an Array // Outputs 25  //  \n is for new line
myNumbers[0] = 33;          //To change the value of a specific element, refer to the index number:
printf("%d\n", myNumbers[0]); // Now outputs 33 instead of 25

printf("%zu\n", sizeof(myNumbers)); // Prints 20

int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
printf("%d", length);  // Prints 5


int i;
for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}



// Declare an array of four integers:
int hyNumbers[4];
// Add elements
hyNumbers[0] = 25;
hyNumbers[1] = 50;
hyNumbers[2] = 75;
hyNumbers[3] = 100;


//C Multidimensional Arrays *****************************

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}

 return 0;            
}
