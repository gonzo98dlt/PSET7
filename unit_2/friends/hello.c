#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // If the user dont put the name in the terminal, Usage
    if (argc != 2)
    {
        printf("Usage: ./hello <name>\n");
        return 1;
    }
    // Print the name that the user gave in the terminal
    printf("hello, %s\n", argv[1]);
}