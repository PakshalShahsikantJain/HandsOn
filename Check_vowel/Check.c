/*
    Author : Pakshal Jain
    Date : 28/09/2022
    Program : To Check Whether Entered Character is Vowel or Not
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Defining 0 value as TRUE
#define TRUE 0
//Defining  value as FALSE
#define FALSE 1

//Defining int Data Type As Boolean
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Character is Vowel or not
BOOL Check(char ch)
{
    if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u'))
    {
        return TRUE;
    }
    else if((ch == 'A')||(ch == 'E')||(ch == 'I')||(ch == 'O')||(ch == 'U'))
    {
        return TRUE;
    } 
    else 
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    char c = '\0';
    BOOL bret = FALSE;

    printf("Jay Ganesh....\n");
    
    printf("Enter One Character...\n");
    scanf("%c",&c);

    //Calling Check Function
    bret = Check(c);

    if(bret == TRUE)
    {
        printf("Entered Character %c is Vowel",c);
    }
    else 
    {
        printf("Entered Character %c is Not A Vowel",c);
    }

    return 0;
}