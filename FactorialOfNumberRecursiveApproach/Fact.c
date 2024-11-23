/*
    Author : Pakshal Shashikant Jain 
    Date : 08/05/2024
    Program : Write a recursive program which accept number from user and return its
              factorial.
              
              Input : 5
              Output : 120 
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Factorial
int Fact(int iNo)
{
    static int imult = 1;

    if(iNo != 0)
    {
        imult = imult * iNo;
        iNo--;

        //Recursive Function Call To Fact Function
        Fact(iNo);
    }
    else 
    {
        return imult;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function 
int main()
{
    int ino = 0;
    int iret = 0;

    printf("Jay Ganesh.....\n");
    
    //Taking Input From User
    printf("Enter One Number : ");
    scanf("%d",&ino);

    //Call To Factorial Function 
    iret = Fact(ino);

    //Printing Factorial Calculated
    printf("Factorial of %d is : %d",ino,iret);

    return 0;
}