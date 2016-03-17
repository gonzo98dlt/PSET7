#include <stdio.h>
#include <cs50.h>
#include <time.h>

int main(void)
{
    while (true)
    {
        srand(time(NULL));
        int dado = rand() % 6;
        printf("\nDados !\n");
        int enter = GetInt();
        if (enter == 1)
        {
            if (dado == 0)
            {
                dado = 6;
            }
            printf("\n\n%i\n\n", dado);
            if (dado == 1)
            {
                printf("*\n");
            }
            else if (dado == 2)
            {
                printf("*\n *\n");
            }
            else if (dado == 3)
            {
                printf("*\n *\n  *\n");
            }
            else if (dado == 4)
            {
                printf("* *\n* *\n");
            }
            else if (dado == 5)
            {
                printf("* *\n *\n* *\n");
            }
            else if (dado == 6)
            {
                printf("* *\n* *\n* *\n");
            }
        }
    }
}
