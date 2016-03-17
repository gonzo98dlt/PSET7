#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Declare variables
    float cambio;
    int monedas;
    monedas = 0;
    int cien = 0, cincuenta = 0, veinte = 0, diez = 0;
    int cinco = 0, dos = 0, uno = 0;
    
    // Incorrect Usage
    if (argc != 2)
    {
        printf("Usage: ./proyecto <change>\n");
        return 1;
    }

    // Get the change
    cambio = atoi(argv[1]);
    
    // Negative number
    while (cambio <= 0)
    {
        printf("Insert a valid number\n");
        return 1;
    }
    
    // Billete de 100
    while (cambio >= 100)
    {
        cambio -= 100;
        monedas++;
        cien++;
    }
    // Print "Cien"
    printf("Cien: %i\n", cien);
    
    // Billete de cincuenta
    while (cambio >= 50)
    {
        cambio -= 50;
        monedas++;
        cincuenta++;
    }
    // Print "cincuenta"
    printf("Cincuenta: %i\n", cincuenta);
    
    // Billete de veinte
    while (cambio >= 20)
    {
        cambio -= 20;
        monedas++;
        veinte++;
    }
    // Print "veinte"
    printf("Veinte: %i\n", veinte);
    
    // Moneda de diez
    while (cambio >= 10)
    {
        cambio -= 10;
        monedas++;
        diez++;
    }
    // Print "diez"
    printf("Diez: %i\n", diez);
    
    // Moneda de cinco
    while (cambio >= 5)
    {
        cambio -= 5;
        monedas++;
        cinco++;
    }
    // Print "cinco"
    printf("Cinco: %i\n", cinco);
    
    // Moneda de dos
    while (cambio >= 2)
    {
        cambio -= 2;
        monedas++;
        dos++;
    }
    // Print "dos"
    printf("Dos: %i\n", dos);
    
    // Moneda de uno
    while (cambio >= 1)
    {
        cambio -= 1;
        monedas++;
        uno++;
    }
    // Print "uno"
    printf("Uno: %i\n", uno);
    
    // Print how many "monedas" (coins) are in total
    printf("Total: %i\n", monedas);
    
    return 0;
}