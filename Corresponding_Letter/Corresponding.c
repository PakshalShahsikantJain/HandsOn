/*
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Accept character from user. If character is small display its
              corresponding capital character, and if it small then display its
              corresponding capital. In other cases display as it is.

              Input : Q
              Output : q

              Input : m
              Output : M

              Input : 4        
              Output : 4

              Input : %
              Output : % 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Character
char Convert(char ch)
{
    //Logic To Convert
    if((ch >= 'a')&&(ch <= 'z'))
    {
        ch = ch - 32;

        return ch;
    }
    else if((ch >= 'A')&&(ch <= 'Z'))
    {
        ch = ch + 32;

        return ch;
    }
    else
    {
        return ch;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char ch = '\0';
    char cret = '\0';

    //Taking input from user
    printf("Enter One Character \n");
    scanf("%c",&ch);

    //Call To Convert Function
    cret = Convert(ch); 

    //Handeling Condition According To Output 
    if((ch >= 'a')&&(ch <= ch <= 'z'))
    {
        printf("Corresponding Capital Letter of Entered Small Letter %c is : %c",ch,cret);
    }
    else if((ch >= 'A')&&(ch <= 'Z'))
    {
        printf("Corresponding Small Letter of Entered Capital Letter %c is : %c",ch,cret);
    }
    else
    {
        printf("There is No Corresponding Letter for Entered Character %c",cret);
    }

    //Conveying OS Code Executed Successfully 
    return 0;
}