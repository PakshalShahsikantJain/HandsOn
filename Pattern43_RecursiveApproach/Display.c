/*
    Author : Pakshal Shashikant Jain
    Date : 29/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 1 2 3 4 5
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern 
void Display(int ino)
{
    static int i = 1;

    if(i > ino)
    {
        return;
    }
    else 
    {
        printf("%d\t",i);
        i++;

        //Call To Display Function
        Display(ino);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;

    printf("Ganapati Bappa Morya Mangal Murti Morya....\n");

    //Taking Input From User
    printf("Enter One Number You Want....\n");
    scanf("%d",&ino);

    printf("Output : ");

    //Call To Display Function
    Display(ino);

    return 0;
}