/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 * 
 * Gonzalo de la Torre Amaya // A01610067 
 * Tecnológico de Monterrey, SLP // CS50x
 */

#define BLOCKSIZE 512

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char BYTE;

int main(void)
{
    FILE* file = fopen("card.raw", "r");
    
    if (file == NULL)
    {
        printf("Error. No se puede abrir el archivo\n");
        return 1;
    }
    
    // Variables
    FILE* image = NULL;
    int counter = 0;
    char title[8];
    BYTE buffer[BLOCKSIZE];
    
    while (fread(&buffer, 1, BLOCKSIZE, file) == 512)
    {
        // inicio JPG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff)
        {
            // Cerrar imagen (si hay)
            if (image)
            {
                fclose(image);
            }
            
            // Abrir imagen (000.jpg)
            sprintf(title, "%03d.jpg", counter);
            image = fopen(title, "a");
            
            // Aumentar contador
            counter++;
        }
        
        // Copiar bloque (si ps jpg)
        if (image)
        {
            fwrite(buffer, 1, BLOCKSIZE, image);
        }
    }
}