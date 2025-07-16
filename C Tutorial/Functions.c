#include <stdio.h> 




void calculateSum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d", sum);
}
int main() { 
  calculateSum();  // call the function

return 0;            
}




void myFunction(char name[]) {
  printf("Hello %s\n", name);
}
int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
// Hello Liam
// Hello Jenny
// Hello Anja




// void myFunction(char name[], int age) {
//   printf("Hello %s. You are %d years old.\n", name, age);
// }
// int main() {
//   myFunction("Liam", 3);
//   myFunction("Jenny", 14);
//   myFunction("Anja", 30);
//   return 0;
// }
// Hello Liam. You are 3 years old.
// Hello Jenny. You are 14 years old.
// Hello Anja. You are 30 years old.
