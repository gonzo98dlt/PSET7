#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Inicializar variables
    int altura;
    
    // Solicitar altura
    do 
    {
        printf("height:\t");
        altura = GetInt();
    }
    while (altura < 0 || altura > 23);
    
    // Construir media priamide
    
    // Escalreas
    for (int i = 0; i < altura; i++)
    {
        // Bloques
        for (int j = 0; j < (altura - 1 - i); j++)
        {
            printf(" ");
        }
        
        // Espacios
        for (int k = 0; k < (i + 2); k++)
        {
            printf("#");
        }
        printf("\n");
    }
}