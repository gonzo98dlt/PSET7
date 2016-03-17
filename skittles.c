#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <time.h>

int main(void)
{
    // Semilla PRNG
    srand(time(NULL));
    
    // Escoger numero pseudorandom en [0,1023]
    int skittles = rand() % 1024;
    
    // TODO
    printf("hai! I'm thinking of a number between 0 and 1023. What is it? ");
    int numero = GetInt();
    
    // Mientras que el numero no sea correcto
    while(skittles != numero)
    
    {
        // Condicion si el numero es menor
        if {
            (numero < skittles)
            printf("Nope! There are way more Skittles than that. Guess again.\n");
        }
        
        // Condicion si el numero es mayor
        if {
            (numero > skittles)
            printf("Nope! There are fewer Skittles than that. Guess again.\n");
        }
        
        // Condicion si el numero es negativo
        if {
            (numero < 0)
            printf("Nope! Don't be difficult. Guess again.\n");
        }
        
        // Declarar al numero entero
        numero = GetInt();
    }
    
    // Preguntar si el numero es igual a skittles
    if (numero == skittles)
    printf("That's right! Nom nom nom.\n");
}