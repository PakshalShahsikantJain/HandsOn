/*
    Author : Pakshal Shashikant Jain 
    Date : 24/07/2023
    Program : Accept Character from user and check whether it is digit or not
              (0-9).

              Input : 7 
              Output : TRUE

              Input : d
              Output : FALSE 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Character is Digit or Not
BOOL Check(char ch) 
{
    if((ch >= '0')&&(ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    char ch = '\0';
    BOOL bret = FALSE;

    printf("Jay Ganesh....\n");
    
    //Taking Input from user
    printf("Enter One Character....\n");
    scanf("%c",&ch);

    //Call to Check Function
    bret = Check(ch);

    //Handeling Condition According To Output
    if(bret == TRUE)
    {
        printf("Entered Character %c is Digit",ch);
    }
    else
    {
        printf("Entered Character %c is Not A Digit",ch);
    }

    return 0;
}