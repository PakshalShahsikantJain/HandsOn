/*
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept number from user and return its
              product of digits.

              Input : 523
              Output : 30 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Summation of Digits of Entered Number
int Mult(int ino)
{
    int Digits = 0;
    static int imult = 1;

    //Logic To Perform Summation
    Digits = ino % 10;
    imult = imult * Digits;
    ino = ino / 10;

    if(ino != 0)
    {
        //Recursive Function Call To SumDigits function
        Mult(ino);
    }
    else 
    {
        return imult;
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

    //Call To Mult Function
    iret = Mult(ino);

    //Printing Product Calculated
    printf("Product of Digits of Entered Number %d is : %d",ino,iret);

    return 0;
}