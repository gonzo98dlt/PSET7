#define _XOPEN_SOURCE
#include <cs50.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LIMIT 65536

int main(int argc, string argv[])
{
    // Incorrect Usage
    if (argc < 3 || argc > 4)
    {
        printf("Usage: ./rng n max [s]\n");
        return 1;
    }
    
    // Declare variables
    int n = atoi(argv[1]);
    int max = atoi(argv[2]);
    
    // Incorrect "Max"
    if (max > LIMIT || max < 0)
    {
        printf("Do not exceed the max number which is 65536\n");
        return 1;
    }
    
    // If someone puts a seed
    if (argc == 4)
    {
        int seed = atoi(argv[3]);
        srand48(seed);
    }
    // Seed RNG
    else
    {
        srand48(time(NULL));
    }
    
    // Make random numbers
    for (int i = 0; i < n; i++)
    {
        printf("Random number %d: %i\n", i, (int) (max * drand48()));
    }
}