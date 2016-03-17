#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Indicar las Variables
    float cambio;
    int monedas, cambio_2;
    monedas = 0;

    // Preguntar el cambio
    printf("O hai! How much change is owed?: ");
    cambio = GetFloat();
    cambio_2 = round(cambio * 100);
    
    // Numero negativo
    while (cambio_2 <= 0)
    {
        printf("Insertar un numero valido \n");
        cambio_2 = GetInt();
    }
    
    // Quarters
    while (cambio_2 >= 25)
    {
        cambio_2 -= 25;
        monedas++;
    }
    
    // Dimes
    while (cambio_2 >= 10)
    {
        cambio_2 -= 10;
        monedas++;
    }
    
    // Nickels
    while (cambio_2 >= 5)
    {
        cambio_2 -= 5;
        monedas++;
    }
    
    // Pennies
    while (cambio_2 >= 1)
    {
        cambio_2 -= 1;
        monedas++;
    }
    
    // Imprimir cuantas monedas
    printf("%i\n", monedas);
    
}