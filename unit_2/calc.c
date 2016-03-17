#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./calc <number1> <operation> <number2>\n");
        return 1;
    }
    else
    {
         // Declare variable
        float numero1 = atof(argv[1]);
        float numero2 = atof(argv[3]);
        int x = numero1 / numero2;
        
        // Calculations 
        switch (argv[2][0])
        {
            // Multiplication
            case 'x':
                printf("%.6f\n", numero1 * numero2);
                break;
            // Division
            case '/':
                printf("%.6f\n", numero1 / numero2);
                break;
            // Addition
            case '+':
                printf("%.6f\n", numero1 + numero2);
                break;
            // Substraction
            case '-':
                printf("%.6f\n", numero1 - numero2);
                break;
            // Modulo
            case '%':
                printf("%.6f\n", numero1 - numero2 * x);
                break;
            // Default
            default:
                printf("Introduce a valid command\n");
                return 1;
        }
    }
}