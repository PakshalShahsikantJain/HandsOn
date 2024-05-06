/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and return
              summation of its digits.
              Input : 879
              Output : 24 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Summation of Digits of Entered Number
int SumDigits(int ino)
{
    int Digits = 0;
    static int sum = 0;

    //Logic To Perform Summation
    Digits = ino % 10;
    sum = sum + Digits;
    ino = ino / 10;

    if(ino != 0)
    {
        //Recursive Function Call To SumDigits function
        SumDigits(ino);
    }
    else 
    {
        return sum;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter One Number : \n");
    scanf("%d",&ino);

    if(ino < 0)
    {
        ino = -ino;
    }

    //Call To SumDigits Function
    iret = SumDigits(ino);

    //Printing Summation Calculated
    printf("Summation of Digits of Entered Number %d is : %d",ino,iret);

    return 0;
}