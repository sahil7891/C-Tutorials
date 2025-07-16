#include <stdio.h> 
int main() { 

//    Strings
//Strings are used for storing text/characters.
//For example, "Hello World" is a string of characters.
//Unlike many other programming languages, C does not have a String type to easily create string variables. Instead, you must use the char type and create an array of characters to make a string in C:
char greetings[] = "Hello World!";

//Note that you have to use double quotes ("").
//To output the string, you can use the printf() function together with the format specifier %s to tell C that we are now working with strings:
char greetings[] = "Hello World!";
printf("%s", greetings);


//You can also loop through the characters of a string, using a for loop:
char carName[] = "Volvo";
int i;
for (i = 0; i < 5; ++i) {
  printf("%c\n", carName[i]);
}
    


//Concatenate Strings
//To concatenate (combine) two strings, you can use the strcat() function:
char str1[20] = "Hello ";
char str2[] = "World!";

// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);
// Print str1
printf("%s", str1);




//To copy the value of one string to another, you can use the strcpy() function:
char str1[20] = "Hello World!";
char str2[20];
// Copy str1 to str2
strcpy(str2, str1);
// Print str2
printf("%s", str2);
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal) //To compare two strings, you can use the strcmp() function. It returns 0 if the two strings are equal, otherwise a value that is not 0:


return 0;            
}