#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Declare variables
    string plaintext = "";
    int key = 0;
    bool valid_key = false;
    int length = 0;
    
    do
    {
        // Incorrect usage
        if (argc != 2)
        {
            printf("Usage: ./caesar <key number>\n");
            return 1;
        }
        // Count the true key
        else
        {
            key = atoi(argv[1]);
            valid_key = true;
        }
    }
    while (!valid_key);
    
    // Get the input from the user
    plaintext = GetString();
    // Get the length of "length"
    length = strlen(plaintext);
    
    for (int i = 0; i < length; i++)
    {
        if (isalpha (plaintext[i]))
        {
            // Upper case 
            if (isupper (plaintext[i]))
            {
                printf("%c", ((((plaintext[i] - 65) + key) % 26) + 65));
            }
            // Lower case
            else
            {
                printf("%c", ((((plaintext[i] - 97) + key) % 26) + 97));
            }
        }
        else
        {
            // Spaces
            if (isspace (plaintext[i]))
            {
                printf(" ");
            }
            // If it isn't a letter or a space
            else
            {
                printf("%c", plaintext[i]);
            }
        }
    }
    // print a necessary \n
    printf("\n");
}