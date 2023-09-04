/*
    Author : Pakshal Shashikant Jain
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and
              check whether bit at that position is on or off. If bit is one return TURE
              otherwise return FALSE.
            
              Input : 10 2
              Output : TRUE 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Defining 1 as TRUE And 0 as FALSE
#define TRUE 1
#define FALSE 0

//Giving New Names To Datatypes
typedef int BOOL;
typedef unsigned int UINT;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Bit is On or Off
BOOL Check(UINT iNo,int iPos)
{
    int iMask = 0X00000001;

    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if((iPos < 1) || (iPos > 32))
    {
        return FALSE;
    }

    //Logic To Check
    iMask = iMask << (iPos - 1);
    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    BOOL bret = FALSE;
    UINT iNo = 0;
    int iPos = 0;

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One Number \n");
    scanf("%u",&iNo);

    printf("Enter One Position \n");
    scanf("%d",&iPos);

    //Call To Check Function
    bret = Check(iNo,iPos);

    //Handeling Condition if bret is TRUE 
    if(bret == TRUE)
    {
        printf("Bit is On at %d Position",iPos);
    }
    else  //Handeling Condition if bret is FALSE 
    {
        printf("Bit is OFF at %d Position",iPos);
    }

    return 0;
}