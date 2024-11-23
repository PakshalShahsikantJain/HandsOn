/*
    Author : Pakshal Shashikant Jain 
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and off
              that bit. Return modified number.

              Input : 10 2
              Output : 8 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

typedef unsigned int UINT;

//Function to OFF Given Bit At Entered Position
UINT OffBit(UINT iNo,int iPos)
{
    int iMask = 0X00000001;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if((iPos < 1)||(iPos > 32))
    {
        return 0;
    }

    //Logic To OFF Bit At Entered Position
    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        iResult = iMask ^ iNo;
    }

    return iResult;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iNo = 0;
    int iPos = 0;
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking Input from user    
    printf("Enter One Number \n");
    scanf("%u",&iNo);

    printf("Enter One Positions \n");
    scanf("%d",&iPos);

    //Call To OffBit Function
    iret = OffBit(iNo,iPos);

    //Printing Modified Number
    printf("Modified Number is : %d",iret);

    return 0;
}