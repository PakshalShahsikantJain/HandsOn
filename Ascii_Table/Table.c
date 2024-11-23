/*
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Write a program which displays ASCII table. Table contains symbol,
              Decimal, Hexadecimal and Octal representation of every member from
              0 to 255
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Ascii Table
void DisplayAscii()
{
    int i = 0;

    //Logic 
    printf("---------------Ascii Table-------------\n");
    printf("Decimal \tHexadecimal \tOctal \tSymbol\n");
    for(i = 0;i <= 255;i++)
    {
        printf("%d\t\t %x\t\t %o\t %c\n",i,i,i,i);
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    printf("Jay Ganesh...\n");

    //Call To DisplayAscii Function
    DisplayAscii();

    return 0;
}