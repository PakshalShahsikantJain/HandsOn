/*
    Author : Pakshal Shashikant Jain 
    Date : 19/07/2023
    Prorgam : Accept Character from user and check whether it is alphabet or not
              (A-Z a-z).
              Input : F
              Output : TRUE
                
              Input : &
              Output : FALSE
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Character is Alphabet
BOOL Check(char ch)
{
    int i = 0;
    
    //Logic 
    if((ch >= 'A')&&(ch <= 'Z')||(ch >= 'a')&&(ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char ch = '\0';
    BOOL bret = FALSE;

    printf("Jay Ganesh.....\n");

    //Taking input from user
    printf("Enter Character You Want : \n");
    scanf("%c",&ch);

    //Call To Main function
    bret = Check(ch);

    if(bret == TRUE)
    {
        printf("Entered Character %c is Alphabet \n",ch);
    }
    else
    {
        printf("Enter Character %c is Not an Alphabet \n",ch);
    }

    return 0;
}