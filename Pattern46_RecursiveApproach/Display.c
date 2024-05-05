/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and display below
              pattern.

              Input : 5
              Output : 5 * 4 * 3 * 2 * 1 * 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
void Display(int ino)
{   
    if(ino < 1)
    {
        return;
    }
    else 
    {
        printf("%d\t*\t",ino);
        ino--;

        //Recursive Function Call
        Display(ino);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From user
    printf("Enter One Number : \n");
    scanf("%d",&ino);

    //Call To Display Function
    Display(ino);

    return 0;
}