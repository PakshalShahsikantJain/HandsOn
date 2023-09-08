/*
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and count number of
              ON (1) bits in it without using % and / operator.

              Input : 11
              Output : 3
*/

//Required Libraries
#include<stdio.h>

//Giving New Name To Datatype unsigned int UINT
typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Numbe of ON Bits
int CountOne(UINT iNo)
{
    int icnt = 0;
    int i = 0;
    int iMask = 0X00000001;
    int iResult = 0;

    //Logic To Count
    for(i = 1;i <= 32;i++)
    {
        iMask = iMask << (i - 1);
        iResult = iMask & iNo;
        if(iResult == iMask)
        {
            icnt++;
        }
        iMask = 0X00000001;
        iResult = 0;
    }

    return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iNo = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");

    //Taking Input from user
    printf("Enter First number \n");
    scanf("%u",&iNo);

    //Call To CountOne Function
    iret = CountOne(iNo);

    //Printing Count of Number of ON Bits
    printf("Count of ON Bits is of Entered Number is : %d",iret);

    return 0;
}