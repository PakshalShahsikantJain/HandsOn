/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number from user and range of
              positions from user. Toggle all bits from that range.
              Input : 897 9 13
              Toggle all bits from position 9 to 13 of input number ie 879.

              UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
              {
                // Logic
              } 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

//Function To Toggle All Bits in Entered Range
UINT RangeToggle(UINT iNo,int iStart,int iEnd)
{
    int i = 0;
    int iMask = 0X00000001;
    UINT iResult = 0;

    //Logic To Toggle
    iResult = iNo;
    for(i = iStart;i <= iEnd;i++)
    {
        iMask = iMask << (i - 1);
        iResult = iResult ^ iMask;
        iMask = 0X00000001;
    }

    return iResult;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iret = 0;
    UINT iNo = 0;
    int iStart = 0;
    int iEnd = 0;

    printf("Jay Ganesh....\n");

    //Taking Input from user    
    printf("Enter One Number...\n");
    scanf("%u",&iNo);

    printf("Enter Starting Number of Range \n");
    scanf("%d",&iStart);

    printf("Enter Ending Number of Range \n");
    scanf("%d",&iEnd);

    //Call To RangeToggle Function
    iret = RangeToggle(iNo,iStart,iEnd);

    //Printing Modified Number
    printf("Modified Number is : %u",iret);

    return 0;
}