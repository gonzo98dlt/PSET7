#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int price = 25;
    
    int change;
    
    int payment = 0;
    
    while (payment < price)
    {
       payment += GetInt(); 
    }   
    
    change = payment - price;
    printf("Paid!! :)\n");
    printf("Change: %i\n", change);
     printf("P %i\n", payment);
}