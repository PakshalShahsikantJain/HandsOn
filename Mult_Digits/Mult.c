/*
    Author : Pakshal Jain
    Date : 20/10/2022
    Program : To Calucalate Multiplication of Digits of Entered Number
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Multiplication of Digits
int MultDigit(int No)
{
    int Digit = 0;
    int Mult = 1;

    //Logic To Calculate Multiplication
    while(No != 0)
    {
        Digit = No % 10;
        //Handeling Condition if Digit is Zero
        if(Digit == 0)
        {
            Digit = 1;
        }
        Mult = Mult * Digit;
        No = No / 10;
    }

    return Mult;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter Any Number...\n");
    scanf("%d",&No);

    //Call To MultDigit Function
    iret = MultDigit(No);

    //Printing Multiplication of Digits
    printf("Multiplication of Digits of Entered Number is : %d",iret);

    return 0;
}