#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char buf[100];
    bool isPalindrome = true;

    scanf("%s", buf);

    for (int i = 0, j = strlen(buf) - 1; i < j; i++, j--)  //checking first and last characters i started from first char and j started from last char 
    {
        if (buf[i] != buf[j])  // if char is not same isPalindrome reset 
        {
            isPalindrome = false;
        }
    }

    if (isPalindrome)    //if isPalindrome is set then string is palindrome 
    {
        printf("%s is a palindrome.", buf);
    }
    else        // if isPalindrome is false meanse string is not palindrome
    {
        printf("%s is not a palindrome.", buf);
    }
    
    return 0;
}