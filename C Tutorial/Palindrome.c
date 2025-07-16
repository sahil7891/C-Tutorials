#include <stdio.h>

int ispalindrome(int num)
{
    int reversed = 0;
    int origionalNumber = num;
    

    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("the reversed number is %d\n", reversed);

    if (origionalNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check wether it is a palindrome or not\n");
    scanf("%d", &number);

    if (ispalindrome(number))
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a plindrome\n");
    }
    return 0;
}