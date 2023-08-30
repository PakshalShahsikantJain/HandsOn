/*
    Author : Pakshal Shashikant Jain
    Date : 30/08/2023
    Program : Write a program which checks whether 5th & 18th bit is On or OFF. 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

#define TRUE 0
#define FALSE 1

//Giving New Name BOOL To Datatype int
typedef int BOOL;

//Giving New Name UINT To Datatype unsigned int
typedef unsigned int UINT;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check 5th and 18th Bit is ON or OFF
BOOL ChkBit(UINT iNo)
{                                 // 0     0     0     2     0     0     1     0
    int iMask = 0X00020010;       // 0000  0000  0000  0010  0000  0000  0001  0000                          
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //Logic to Check Bit is on or off
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iNo = 0;
    BOOL bret = FALSE;

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One Number\n");
    scanf("%d",&iNo);

    //Call To ChkBit Function
    bret = ChkBit(iNo);

    if(bret == TRUE)
    {
        printf("5th And 18th bit is ON");
    }
    else
    {
        printf("One of 5th Or 18th bit is OFF");
    }

    return 0;
}