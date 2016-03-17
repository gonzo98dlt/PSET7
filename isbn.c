#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Inicializar variables
    int digito;
    long long isbn; 
    int total = 0;
    
    // Pedir datos 
    do 
    {
        printf("ISBN: ");
        isbn = GetLongLong();
    }
    while (isbn <= 0);
    
    // Operaciones
    for (int i = 10; i > 0; i--)
    {
        digito = isbn % 10;
        isbn /= 10;
        total += digito * i;
    }
    
    // Imprimir resultados
    if (total % 11 == 0)
    {
        printf("YES\n");
    }
    else if (total % 11 != 0)
    {
        printf("NO\n");
    }
}