#include <stdio.h>       
int main() { 

    if (20 > 18) {
  printf("20 is greater than 18");
}


int x = 20;
int y = 18;
if (x > y) {
  printf("x is greater than y");
}



// if else
int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
// Outputs "Good evening."



//else if
int time = 22;
if (time < 10) {
  printf("Good morning.");
} else if (time < 20) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
// Outputs "Good evening."



int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}



//Switch Statement
//Instead of writing many if..else statements, you can use the switch statement.
//The switch statement selects one of many code blocks to be executed:
int day = 4;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
}
// Outputs "Thursday" (day 4)




 return 0;
}
