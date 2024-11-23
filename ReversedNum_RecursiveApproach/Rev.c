/*
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program :  Write a recursive program which accept number from user and return its
               reverse number.

               Input : 523
               Output : 325  
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Reverse Entered Number 
int RevNum(int ino)
{
    static int rno = 0;
    int Digit = 0;

    //Logic To Reverse
    if(ino != 0)
    {
        Digit = ino % 10;
        rno = (rno * 10) + Digit;
        ino = ino / 10;

        //Recursive Function Call To RevNum Function
        RevNum(ino);
    }
    
    return rno;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;
    int iret = 0;

    printf("Jay Ganesh.....\n");
    
    //Taking Input From User
    printf("Enter One Number : \n");
    scanf("%d",&ino);

    //Call To RevNum Function
    iret = RevNum(ino);

    //Printing Reversed Number
    printf("Reversed Number of Number %d is : %d",ino,iret);

    return 0;
}