/*
    Author : Pakshal Shashikant Jain 
    Date : 11/5/2024
    Program : Write a recursive program which accept number from user and return
              largest digit

              Input : 87983
              Output : 9   
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Largest Digit
int Max(int ino)
{
    int Digit = 0;
    static int imax = 0;

    //Logic To Find 
    Digit = ino % 10;
    if(imax < Digit)
    {
        imax = Digit;
    }
    ino = ino / 10;

    if(ino != 0)
    {
        //Recursive Function Call To Max Function
        Max(ino);
    }
    else 
    {
        return imax;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;
    int ino = 0;
    
    printf("Jay Ganesh...\n");

    //Taking Input From user
    printf("Enter One Number : \n");
    scanf("%d",&ino);

    //Call To Max Function
    iret = Max(ino);

    //Printing Largest Digit Found 
    printf("Largest Digit of Number %d is : %d",ino,iret);

    return 0;
}