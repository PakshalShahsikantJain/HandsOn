/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and on its first 4
              bits. Return modified number.

              Input : 73
              Output : 79 
*/

//Required Libraries
#include<stdio.h>

typedef unsigned int UINT;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To On First Four Bits 
UINT OnBit(UINT iNo)
{
    UINT iResult = 0;
    int iMask = 0X0000000F;

    iResult = iNo | iMask;

    return iResult;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iret = 0;
    int iNo = 0;

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One Number..\n");
    scanf("%d",&iNo);

    //Call To OnBit function
    iret = OnBit(iNo);

    //Printing Modifed Number
    printf("Modified Number is : %u",iret);

    return 0;
}