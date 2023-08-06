/*
    Author : Pakshal Shashikant Jain 
    Date : 05/08/2023
    Program : Accept Character from user and check whether it is special symbol
              or not (!, @, #, $, %, ^, &, *).

              Input : %
              Output : TRUE

              Input : d
              Output : FALSE 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Character is Special Symbol or Not
BOOL Check(char ch)
{
    //Logic
    if((ch >= '#')&&(ch <= '&'))
    {
        return TRUE;
    }    
    else if((ch == '!')||(ch == '@')||(ch == '*')||(ch == '^'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    BOOL bret = FALSE;
    char ch = '\0';

    printf("Jay Ganesh......\n");

    //Taking input from user
    printf("Enter One Character To Check Entered Character is Special Symbol or not\n");
    scanf("%c",&ch);

    //Call To Check Function
    bret = Check(ch);

    //Handeling Conditions According To output
    if(bret == TRUE)
    {
        printf("Entered Character %c is Special Symbol \n",ch);
    }
    else
    {
        printf("Entered Character %c is Not a Special Symbol \n",ch);
    }

    return 0;
}