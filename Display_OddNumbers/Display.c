/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Number From User and  Print Odd Numbers Till That Number
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Odd Number
void Display(int No)
{
    int i = 0;

    //Logic
    printf("Printing Odd Numbers Till Entered Number...\n");
    for(i = 1;i <= No;i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t",i);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter One Number...\n");
    scanf("%d",&No);

    //Call TO Display Function
    Display(No);

    return 0;
}