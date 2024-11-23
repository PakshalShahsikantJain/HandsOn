/*
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and toggle contents 
              of first and last nibble of the number. Return modified number. (Nibble is a
              group of four bits) 

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Giving New Name To Data Type unsigned int UINT 
typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Toggle Contents of First And Last Nibble of That Number
UINT ToggleBit(UINT iNo)
{
    int iMask = 0XF000000F;
    UINT iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //Logic To Toggle Contents
    iResult = iMask ^ iNo;

    //Returing Modified Number
    return iResult;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iret = 0;
    int iNo = 0;

    printf("Jay Ganesh.....\n");

    //Taking Input from user
    printf("Enter One Number...\n");
    scanf("%d",&iNo);

    //Call To ToggleBit Function
    iret = ToggleBit(iNo);

    //Printing Modified Numbers
    printf("Modified Number is : %u",iret);

    return 0;
}