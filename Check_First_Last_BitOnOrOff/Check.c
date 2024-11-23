/*
    Author : Pakshal Shashikant Jain 
    Date : 31/08/2023
    Program : Write a program which checks whether first and last bit is On or
              OFF. First bit means bit number 1 and last bit means bit number 32. 
*/

//Required Libraries
#include<stdio.h>

#define TRUE 1
#define FALSE 0

//Given New Names To old data type namse
typedef int BOOL;
typedef unsigned int UINT;

//Function To Check First and Last Bit is On or Off
BOOL Check(UINT iNo)
{                                 // 8     0     0     0     0     0     0     1
    int iMask = 0X80000001;       // 1000  0000  0000  0000  0000  0000  0000  0001
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo = 0;
    BOOL bret = 0;

    printf("Jay Ganesh.....\n");

    //Taking Input from user 
    printf("Enter One Number.\n");
    scanf("%d",&iNo);

    //Call To Check Function
    bret = Check(iNo);

    //Handeling Condition if bret is TRUE
    if(bret == TRUE)
    {
        printf("First and Last Bit are ON");
    }
    //Handeling Condition if bret is FALSE
    else
    { 
        printf("First or Last Bit is OFF");
    }

    return 0;
}