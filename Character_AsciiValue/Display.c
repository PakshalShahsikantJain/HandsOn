/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Accept character from user and display its ASCII value in decimal,
              octal and hexadecimal format.
              
              Input : A
              Output : Decimal 65
                       Octal 0101
                       Hexadecimal 0X41
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Function To Display Character in Decimal,Octal,Hexadecimal Format
void Display(char ch)
{
    //Logic To Display 
    printf("Decimal Value of Character : %d\n",ch);
    printf("Octal Value of Character : %#o\n",ch);
    printf("Hexadecimal Value of Charcter : %#X\n",ch);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char ch = '\0';

    printf("Jay Ganesh...\n");

    //Taking input from user
    printf("Enter One Character You Want\n");
    scanf("%c",&ch);

    //Call To Display Function
    Display(ch);
    
    return 0;
}