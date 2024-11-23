/*
    Auhtor : Pakshal Jain 
    Date : 16/10/2022
    Program : To Check Whether Entered Number Contains Zero In It Or Not
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Deifining 1 as TRUE ans 0 As FALSE
#define TRUE 1
#define FALSE 0

//Converting DataType Int TO BOOL
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To check Number Conatains Zero or not
BOOL CheckZero(int No)
{
    int Digit = 0;

    //Logic To Check
    while(No != 0)  
    {
        Digit = No % 10;
        if(Digit == 0)
        {
            break;
        }
        No = No / 10;
    }

    if(Digit == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    BOOL bret = FALSE;

    printf("Jay Ganesh...\n");
    
    printf("Enter Any Number of Two Or More Digits\n");
    scanf("%d",&No);

    //Calling Function CheckZero 
    bret = CheckZero(No);

    //Printing Final Output Whether Number Conatains Zero or Not
    if(bret == TRUE)
    {
        printf("Enterd Number Contains Zero in it\n");
    }
    else 
    {
        printf("Entered Number Does Not Conatains Zero\n");
    }

    return 0;
}