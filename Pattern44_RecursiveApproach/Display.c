/*
    Author : Pakshal Shashikant Jain
    Date : 30/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 5 4 3 2 1
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern 
void Display(int ino)
{
    if(ino < 1)
    {
        return;
    }
    else 
    {
        printf("%d\t",ino);
        ino--;
        Display(ino);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter any one Number You Want : \n");
    scanf("%d",&ino);

    printf("Output : \n");
    
    //Call To Display Function
    Display(ino);

    return 0;
}