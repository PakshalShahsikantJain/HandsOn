/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and off 7th bit of that
              number if it is on. Return modified number. 
*/

//Required Libraries
#include<stdio.h>

typedef int unsigned UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Off On Bit
UINT offBit(UINT iNo)
{                              //   0    0    0    0    0    0    4    0
    int iMask = 0X00000040;    //   0000 0000 0000 0000 0000 0000 0100 0000
    int iResult = 0;
    UINT iret = 0;

    iResult = iNo & iMask;

    //Logic To Off 7th Bit is On
    if(iResult == iMask)
    {
        iret = iNo ^ iMask;    
    }

    return iret;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int iNo = 0;
    UINT iret = 0;

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One Number \n");
    scanf("%d",&iNo);

    //Call To OffBit Function
    iret = offBit(iNo);

    //Printing Modified Number
    printf("Modified Number is : %u",iret);

    return 0;
}















///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Decimal            Binary
0                  0000
1                  0001
2                  0010
3                  0011
4                  0100
5                  0101
6                  0110
7                  0111
8                  1000
9                  1001
10                 1010
11                 1011
12                 1100
13                 1101
14                 1110
15                 1111
*/