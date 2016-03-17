/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 * 
 * Gonzalo de la Torre Amaya CS50x A01610067
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // TODO: Usage: Si lo que el usuario introduce no es 2 & 3
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // TODO: declarar n para que sea el ya convertido a int
    int n = atoi(argv[1]);

    // TODO: Si el usuario intruduce 3, generar 3 renglones de numeros random
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));
    }
    else
    {
        srand48((long int) time(NULL));
    }

    // TODO:Imprimir no. random, y de acuerdo del no. dado, es no. de renglones
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success !!!
    return 0;
}