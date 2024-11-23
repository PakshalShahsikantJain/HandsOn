/*
    Author : Pakshal Shashikant Jain 
    Date : 08/09/2023
    Program : Write a program which accept two numbers from user and display position
              of common ON bits from that two numbers.
              Input : 10 15 (1010 1111)
              Output : 2 4
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Position of Common ON Bits
void CommonBit(UINT iNo,UINT iNo2)
{
    int iRem = 0;
    int ipos = 0;

    //Logic To Display
    int iResult = iNo & iNo2;

    printf("Common Bits Position From Entered Two Number is : \n");
    ipos = 1;
    while(iResult != 0)
    {
        iRem = iResult % 2;
        if(iRem == 1)
        {
            printf("%d\t",ipos);
        }
        ipos++;
        iResult = iResult / 2;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iNo = 0;
    UINT iNo2 = 0;

    printf("Jay Ganesh...\n");

    //Taking Input from user
    printf("Enter First number \n");
    scanf("%u",&iNo);

    printf("Enter Second Number \n");
    scanf("%u",&iNo2);
    
    //Call To CommonBit Function
    CommonBit(iNo,iNo2);

    return 0;
}