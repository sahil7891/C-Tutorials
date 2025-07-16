#include <stdio.h> 
int main() { 

//Booleans represent one of two values: true or false.

int x = 10;
int y = 9;
printf("%d", x > y);

printf("%d", 10 == 10); // Returns 1 (true), because 10 is equal to 10
printf("%d", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
printf("%d", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55




int myAge = 25;
int votingAge = 18;
printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!
 


int myAge = 25;
int votingAge = 18;

if (myAge >= votingAge) {
  printf("Old enough to vote!");
} else {
  printf("Not old enough to vote.");
}

return 0;            
}
