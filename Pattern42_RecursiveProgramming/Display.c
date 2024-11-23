/*
    Author : Pakshal Shashikant Jain 
    Date : 28/04/2024
    Program : Write a recursive program which display below pattern.
              Output : * * * * *
*/

//importing Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
void Display(int ino)
{
    if(ino == 0)
    {
        return;
    }
    else 
    {
        printf("*\t");
        ino--;

        //Recursive Function Call 
        Display(ino);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int ino = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User 
    printf("Enter Number of Times You Want To Print '*'\n");
    scanf("%d",&ino);

    //Call To Display Function
    printf("Output : \n");
    Display(ino);
 
    return 0;
}
