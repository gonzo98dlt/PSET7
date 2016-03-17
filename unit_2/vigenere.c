#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
     // Incorrect usage
    if (argc != 2)
    {
        printf("Usage: ./vigenere <key word>\n");
        return 1;
    }
    
    // Declare variables
    string key = argv[1];
    int key_len = strlen(key);
    int j = 0;
    int k;
    
    // For the key
    for (int i = 0; i < key_len; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Invalid key\n");
            return 1;
        }
        // It is alpha !
        key[i] = tolower(key[i]);
    }
    
    // More varriables
    string plaintext = GetString();
    int p_length = strlen(plaintext);
    
    // For the plaintext
    for (int i = 0; i < p_length; i++)
    {
        
        // Isalpha
        if (isalpha (plaintext[i]))
        {
            k = key[j % key_len] - 'a';
            // Isupper
            if (isupper (plaintext[i]))
            {
                printf("%c", (((plaintext[i] - 'A') + k) % 26 ) + 'A');
            }
            // Islower
            else 
            {
                printf("%c", (((plaintext[i] - 'a') + k) % 26 ) + 'a');
            }
            
            j++;
        }
        // If it isn't alpha
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    // Print a necessary \n
    printf("\n");
    return 0;
}