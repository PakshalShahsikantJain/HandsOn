/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number , two positions from user and
              check whether bit at first or bit at second position is ON or OFF.

              Input : 10 3 7
              Output : FALSE 
*/

//Required Libraries
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

//Function To Check Bit is ON Or OFF
BOOL Check(UINT iNo,int iPos1,int iPos2)
{
    int iMask = 0X00000001;
    int iMask2 = 0X00000001;
    UINT iResult = 0;
    UINT iResult2 = 0;

    iMask = iMask << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult = iMask & iNo;
    iResult2 = iMask2 & iNo;

    //Checking Bit ON OR OFF
    if((iResult == iMask)||(iResult2 == iMask2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iNo = 0;
    int iPos1 = 0;
    int iPos2 = 0;
    BOOL bret = FALSE;

    printf("Jay Ganesh.....\n");

    //Taking input from user
    printf("Enter One Number \n");
    scanf("%u",&iNo);

    printf("Enter First Position..\n");
    scanf("%d",&iPos1);

    printf("Enter Second Position..\n");
    scanf("%d",&iPos2);

    //Call To Check Function
    bret = Check(iNo,iPos1,iPos2);

    //Handeling Condidtion if bret is TRUE
    if(bret == TRUE)
    {
        printf("One Or Both Bits are ON \n");
    }

    //Handeling Condition if bret is FALSE
    else
    {
        printf("Both Bits are OFF");
    }

    return 0;
}