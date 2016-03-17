/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int start = 0;
    int end = n - 1;
    int middle;
    
    while (start <= end)
    {
        // finde the calue of my variable
        middle = (end + start) / 2;
        if (values[middle] > value)
        {
            end = middle - 1; 
        }
        else if (values[middle] < value)
        {
            start = middle + 1;
        }
        else 
        {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int minimun;
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 0; i < (n - 1); i++)
    {
        minimun = i;
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[minimun])
            {
                minimun = j; 
                
            }
            
        }
        // Change of place 
        if (minimun != 1)
        {
            int y = values[i];
            values[i] = values[minimun];
            values[minimun] = y;
        }
    }
    return;
}