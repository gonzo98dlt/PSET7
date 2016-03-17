#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Incorrect usage
    if (argc != 2)
    {
        printf("Invalid\nUsage: ./g <1,2, or 3>\n");
        return 1;
    }
    
    // Declare variables
    int money = 0;
    int input = atoi(argv[1]);
    bool storage_1 = false, storage_2 = false, storage_3 = false;
    bool button_1 = false, button_2 = false, button_3 = false;
    
    if (input <= 0 || input > 3)
    {
        printf("Invalid input\n");
        return 1;
    }
    
    // When someone press the button "1"
    if (input == 1)
        {
            button_1 = true;
        }
    
    // When someone press the button "2"
    if (input == 2)
        {
            button_2 = true;
        }
    
    // When someone press the button "3"    
    if (input == 3)
        {
            button_3 = true;
        }
    
    // The button and storage 1
    // If button 1 is "on" by someone who press the button
    if (button_1 == true)
    {
        storage_1 = true;
    }
    
    // If the storage 1 is "on"
    if (storage_1 == true)
    {
        money = 25;
    }
    
    // The button and storage 2
    // If button 2 is "on" by someone who press the button
    if (button_2 == true)
    {
        storage_2 = true;
    }
    
    // If the storage 2 is "on"
    if (storage_2 == true)
    {
        money = 20;
    }
    
    // The button and storage 3
    // If button 1 is "on" by someone who press the button
    if (button_3 == true)
    {
        storage_3 = true;
    }
    
    if (storage_3 == true)
    {
        money = 15;
    }
    
    printf("$%i.00\n", money);
}