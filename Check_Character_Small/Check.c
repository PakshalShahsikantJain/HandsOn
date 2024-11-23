/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept Character from user and check whether it is small case or
              not (a-z).

              Input : g
              Output : TRUE

              Input : D
              Output : FALSE 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

//Converting Type int To Bool
typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Character is Small Case Character or Not
BOOL Check(char ch)
{
    //Logic 
    if((ch >= 'a')&&(ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    char ch = '\0';
    BOOL bret = FALSE;

    printf("Jay Ganesh.....\n");

    //Enter Character To Check
    printf("Enter One Character To Check \n");
    scanf("%c",&ch);

    //Call To Check Function
    bret = Check(ch);   

    //Handeling Condition According To Output
    if(bret == TRUE)
    {
        printf("Entered Character %c is Small Case Character \n",ch);
    }
    else
    {
        printf("Entered Character %c is not Small Case Character \n",ch);
    }

    return 0;
}