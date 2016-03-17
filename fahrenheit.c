#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Pedir los datos
    printf("C: ");
    float celsius = GetFloat();
    
    // Calcular operacion y mostrar resultado
    float resultado = ((celsius * 9) / 5) + 32;
    printf("F: %.1f\n", resultado);
}