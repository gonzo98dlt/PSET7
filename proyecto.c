/* PROYECTO FINAL
CS50 - Pensamiento Lógico Computacional
Tecnológico de Monterrey - San Luis Potosí
3er Semestre 2015

Gonzalo de la Torre Amaya - A01610067
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Incorrect usage
    if (argc != 2)
    {
        printf("Invalid\nUsage: ./proyecto <1,2, or 3>\n");
        return 1;
    }
    
    // Declare variables
    int money = 0;
    int input = atoi(argv[1]);
    bool storage_1 = false, storage_2 = false, storage_3 = false;
    bool button_1 = false, button_2 = false, button_3 = false;
    int contain_1 = 10, contain_2 = 10, contain_3 = 10;
    
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
        contain_1 --;
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
        contain_2 --;
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
        contain_3 --;
    }
    
    printf("\n$%i.00\n", money);
    
    /** 
     * Change
     */
     
    // Declare variables
    float change;
    int coins;
    coins = 0;
    int cien = 0, cincuenta = 0, veinte = 0, diez = 0;
    int cinco = 0, dos = 0, uno = 0;
    
    // Declare "payment" to get the money that the user gives to pay
    int payment;
    
    do
    {
        // Ask the user how much will be his payment
        printf("\nPayment: ");
        
        // GetInt the payment
        payment = GetInt();
        
        // Incorrect Usage
        if (payment < money)
        {
            printf("Insert a valid money to pay the product\n");
        }
    }
    while (payment < money);

    // Get the change
    change = payment - money;
    
    // Print the word "Change" to indicate what is the change
    printf("\nChange:\n\n");
    
    // Billete de 100
    while (change >= 100)
    {
        change -= 100;
        coins++;
        cien++;
    }
    
    // Only if "cien" increased
    if (cien != 0)
    {
        // Print "Cien"
        printf("Cien: %i\n", cien);
    }
    
    // Billete de cincuenta
    while (change >= 50)
    {
        change -= 50;
        coins++;
        cincuenta++;
    }
    
    // Only if "cincuenta" increased
    if (cincuenta != 0)
    {
        // Print "cincuenta"
        printf("Cincuenta: %i\n", cincuenta);
    }
    
    // Billete de veinte
    while (change >= 20)
    {
        change -= 20;
        coins++;
        veinte++;
    }
    
    // Only if "veinte" increased
    if (veinte != 0)
    {
        // Print "veinte"
        printf("Veinte: %i\n", veinte);
    }
    
    // Moneda de diez
    while (change >= 10)
    {
        change -= 10;
        coins++;
        diez++;
    }
    
    // Only if "diez" increased
    if (diez != 0)
    {
        // Print "diez"
        printf("Diez: %i\n", diez);
    }
    
    // Moneda de cinco
    while (change >= 5)
    {
        change -= 5;
        coins++;
        cinco++;
    }
    
    // Only if "Cinco" increased
    if (cinco != 0)
    {
        // Print "cinco"
        printf("cinco: %i\n", cinco);
    }
    
    // Moneda de dos
    while (change >= 2)
    {
        change -= 2;
        coins++;
        dos++;
    }
    
    // Only if "dos" increased
    if (dos != 0)
    {
        // Print "dos"
        printf("Dos: %i\n", dos);
    }
    
    // Moneda de uno
    while (change >= 1)
    {
        change -= 1;
        coins++;
        uno++;
    }
    
    // Only if "uno" increased
    if (uno != 0)
    {
        // Print "uno"
        printf("Uno: %i\n", uno);
    }
    
    // Print how many "coins" (coins) are in total
    printf("\nTotal: %i\n\n", coins);
    
    // Print the contain of the products (how many left)
    printf("Contain:\n\nProduct 1: %i\nProduct 2: %i\nProduct 3: %i\n\n", contain_1, contain_2, contain_3);
    
    return 0;
}