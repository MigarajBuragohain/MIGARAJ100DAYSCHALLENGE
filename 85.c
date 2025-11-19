//Q85: Reverse a string.
#include <stdio.h>

int main() 
{
    char str[30], temp;
    int i, j;

    printf("Enter a string : ");
    gets(str);

    for (j = 0; str[j] != '\0'; j++);

    for (i = 0, j = j - 1; i < j; i++, j--) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string is : %s", str);
    return 0;
}
