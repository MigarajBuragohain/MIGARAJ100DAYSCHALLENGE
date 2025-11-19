//Q89: Count frequency of a given character in a string.
#include <stdio.h>
int main() 
{
    char str[30], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);  
    printf("Enter the character to search: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            count++;
        }
    }
    printf("Frequency of '%c' in %s is = %d", ch,str, count);
    return 0;
}
