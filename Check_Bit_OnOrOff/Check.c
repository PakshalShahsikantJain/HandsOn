/*
    Author : Pakshal Shashikant Jain
    Date : 30/08/2023
    Program : Write a program which checks whether 15th bit is On or OFF.
*/

//Required Libraries
#include<stdio.h>

//Defining 1 as TRUE
#define TRUE 1

//Defining 0 as FALSE
#define FALSE 0

//Giving New Name To Datatype int i.e BOOl
typedef int BOOL;

//Giving New Name To Datatype unsignedint i.e UINT
typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check 15 Bit is On Or off of Number
BOOL ChkBit(UINT iNo)
{                                                        //  0     0     0     0     4      0     0      0 
    int iMask = 0X00004000;                              // 0000  0000  0000  0000  0100   0000  0000   0000
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //Logic To Check Bit is ON or OFF
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    } 
    else
    {
        return FALSE;
    }
}//End of Functio Body

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    BOOL bret = FALSE;

    printf("Jay Ganesh.....\n");

    //Taking Input from user
    printf("Enter One String \n");
    scanf("%d",&No);

    //Call To ChkBit Function
    bret = ChkBit(No);

    //Handeling Condition if Output is True
    if(bret == TRUE)
    {
        printf("15th Bit is ON");
    }                                       
    else
    {
        printf("15th Bit is OFF");
    }

    return 0;
}