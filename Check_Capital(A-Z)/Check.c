/*
    Author : Pakshal Shashikant Jain 
    Date : 21/07/2023
    Prorgam : Accept Character from user and check whether it is capital or not(A-Z).
              Input : F
              Output : TRUE

              Input : d
              Output : FALSE 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraires
#include<stdio.h>
#include<stdlib.h>

//Defining TRUE as 1
#define TRUE 1

//Defining FALSE as 0
#define FALSE 0

//Converting data type int to BOOL
typedef int BOOL;

//Function To Check Entered Character is Capital or Not
BOOL Check(char ch)
{
    //Logic
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char ch = '\0';
    BOOL bret = FALSE;

    printf("Jay Ganesh.....\n");

    //Taking input from user
    printf("Enter Character You Want To Check Wheter it is Capital or Not\n");
    scanf("%c",&ch);
    
    //Call To Check Function
    bret = Check(ch);

    //Handeling Coditions according to Output
    if(bret == TRUE)
    {
        printf("Entered Character %c is Capital",ch);
    }
    else
    {
        printf("Enter Character %c is Not Capital",ch);
    }

    return 0;
}