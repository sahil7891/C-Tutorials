#include <stdio.h> 
int main() { 

    //While loop**********
    int i = 0;
while (i < 5) {
  printf("%d\n", i);
  i++;
}


int countdown = 3;
while (countdown > 0) {
  printf("%d\n", countdown);
  countdown--;
}
printf("Happy New Year!!\n");


//The Do/While Loop**************
int i = 0;
do {
  printf("%d\n", i);
  i++;
}
while (i < 5);



// For loop*******************************

int i;
for (i = 0; i < 5; i++) {
  printf("%d\n", i);
}



int sum = 0;
int i;
for (i = 1; i <= 5; i++) {
  sum = sum + i;
}
printf("Sum is %d", sum);




//Nested Loops
//It is also possible to place a loop inside another loop. This is called a nested loop.
//The "inner loop" will be executed one time for each iteration of the "outer loop":
int i, j;
// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}



int i, j;
for (i = 1; i <= 3; i++) {
  for (j = 1; j <= 3; j++) {
    printf("%d ", i * j);
  }
  printf("\n");
}



//C Break and Continue****************************************
int i;
for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}




int i;
for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}



int i = 0;
while (i < 10) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
  i++;
}



int i = 0;
while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  printf("%d\n", i);
  i++;
}



     return 0;            
}
