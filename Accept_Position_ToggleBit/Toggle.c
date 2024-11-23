/*
    Author : Pakshal Shashikant Jain 
    Date : 05/09/2023
    Program : Write a program which accept one number and position from user and
              toggle that bit. Return modified number. 

              Input : 10 3
              Output : 14 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Giving New Name To Unsigned int i.e UINT
typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Toggle Bit
UINT Toggle(UINT iNo,int iPos)
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

    iMask = iMask << (iPos - 1);
    iResult = iMask ^ iNo;

    return iResult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iNo = 0;
    int iPos = 0;
    UINT iret = 0;

    printf("Jay Ganesh...\n");

    //Taking Input from user
    printf("Enter One Number \n");
    scanf("%d",&iNo);
    
    printf("Enter One Position \n");
    scanf("%d",&iPos);

    //Call To Toggle Function
    iret = Toggle(iNo,iPos);

    //Printing Modified Number
    printf("Modified Number is : %d",iret);

    return 0;
}