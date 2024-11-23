/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and toggle 7th bit of
              that number. Return modified number.  
*/

//Required Libraries
#include<stdio.h>

typedef int unsigned UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Toggle Bit
UINT ToggleBit(UINT iNo)
{                              //    0    0    0    0    0    0    4    0
    int iMask = 0X00000040;    //   0000 0000 0000 0000 0000 0000 0100 0000
    int iResult = 0;
    UINT iret = 0;

    iResult = iNo ^ iMask;    

    return iResult;
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

    //Call To ToggleBit Function
    iret = ToggleBit(iNo);

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