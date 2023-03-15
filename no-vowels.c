// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replace_vowels(char* str);

int main(int argc, string argv[])
{


    replace_vowels(argv[1]);

    printf("%s\n", argv[1]);

    return 0;
}

void replace_vowels(char* str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        switch (tolower(str[i]))
        {
            case 'a':
                str[i] = '6';
                break;
            case 'e':
                str[i] = '3';
                break;
            case 'i':
                str[i] = '1';
                break;
            case 'o':
                str[i] = '0';
                break;
        }
    }
}
