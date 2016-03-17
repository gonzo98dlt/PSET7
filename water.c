/**
 * Gonzalo de la Torre - A01610067
 * CS50x Tecnológico de Monterrey, San Luis Potosí
 * 
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int minutes = GetInt();
    
    int bottles = minutes * 12;
    printf("Bottles: %i\n", bottles);
}