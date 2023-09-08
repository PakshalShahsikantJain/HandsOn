/*
    Author : Pakshal Shashikant Jain
    Date : 09/09/2023
    Program : Write a program which accept one number from user and check whether
              9th or 12th bit is on or off.
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

//Function To Check Bit is ON or OFF
BOOL ChkBit(UINT iNo)
{                                 //  0     0     0     0     0     1     0     0
    int iMask = 0X00000100;       // 0000  0000  0000  0000  0000  0001  0000  0000

                                  //  0     0     0     0     0     8     0     0                                                            
    int iMask2 = 0X00000800;      // 0000  0000  0000  0000  0000  1000  0000  0000
    int iResult = 0;
    int iResult2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //Logic to Check Bit is on or off
    iResult = iNo & iMask;
    iResult2 = iNo & iMask2;

    if((iResult == iMask)||(iResult2 == iMask2))
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
        printf("One or Both Bits are ON");
    }
    else
    {
        printf("Both BITS are OFF");
    }

    return 0;
}




/*
    Digit             Binary
        0              0000  
        1              0001
        2              0010
        3              0011
        4              0100 
        5              0101
        6              0110
        7              0111
        8              1000
        9              1001 
        10             1010  
        11             1011
        12             1100
        13             1101     
        14             1110 
        15             1111
*/