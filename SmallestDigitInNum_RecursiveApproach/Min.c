/*
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program : Write a recursive program which accept number from user and return
              smallest digit

              Input : 87983
              Output : 3  
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Smallest Digit
int Min(int ino)
{
    int Digit = 0;
    static int imin = 0;

    //Logic To Find 
    if(imin == 0)
    {
        imin = ino % 10;
        ino = ino / 10;
    }

    Digit = ino % 10;
    if(Digit == 0)
    {
        imin = 0;
        return imin;
    }
    else if(Digit < imin)
    {
        imin = Digit;
    }
    ino = ino / 10;

    if(ino != 0)
    {        
        //Recursive Function Call To Min Function
        Min(ino);
    }
    
    return imin;
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

    //Call To Min Function
    iret = Min(ino);

    //Printing Smallest Digit Found 
    printf("Smallest Digit of Number %d is : %d",ino,iret);

    return 0;
}