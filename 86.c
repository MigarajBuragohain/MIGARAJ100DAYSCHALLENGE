//Q86: Check if a string is a palindrome.
#include <stdio.h>
int main() 
{
    char str[20];
    int i, j, flag = 1;
    printf("Enter a string: ");
    gets(str); 

    for (j = 0; str[j] != '\0'; j++);

    for (i = 0, j = j - 1; i < j; i++, j--) 
    {
        if (str[i] != str[j]) 
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is NOT a palindrome.");
    return 0;
}
