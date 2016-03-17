#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Inicializar variables
    int dias, pennies;
    long long dolares = 0;
    
    // Pedir numeros de días del mes
    do
    {
        printf("Days in month: ");
        dias = GetInt();
    }
    while (dias < 28 || dias > 31);
    
    // Pedir numero de pennies en el primer día
    do
    {
        printf("Pennies on first day: ");
        pennies = GetInt();   
    }
    while (pennies <= 0);
    
    // Calcular y dar la cantidad de dolares en todo el mes
    for (int i=0; i < dias; i++)
    {
        dolares += pennies * pow (2,i);
    }
    
    printf("$%.2f\n", dolares / 100.0);
}