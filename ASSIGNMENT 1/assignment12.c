//ASSIGNMENT 1
//2. Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>

void main()
{
    int num = 121, original, rev;

    original = num;

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    if (original == rev)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
}
