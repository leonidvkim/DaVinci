// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{

    bool has_uppercase = false;
    bool has_lowercase = false;
    bool has_number = false;
    bool has_symbol = false;

    for (int i = 0, n = strlen(password); i < n; i++)
    {
        if (isupper(password[i]))
        {
            has_uppercase = true;
        }
        else if (islower(password[i]))
        {
            has_lowercase = true;
        }
        else if (isdigit(password[i]))
        {
            has_number = true;
        }
        else
        {
            has_symbol = true;
        }
    }

    return has_uppercase && has_lowercase && has_number && has_symbol;

}
