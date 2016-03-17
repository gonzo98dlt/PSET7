#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // If it isnt correct
    if (argc != 2)
    {
        printf("Usage: ./fahrenheit <number>\n");
        return 1;
    }
    // Print the fahrenheit that is correct
    printf("F: %.1f\n", atof(argv[1]) * 9 / 5 + 32);
}