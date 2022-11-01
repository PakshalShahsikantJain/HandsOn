/*
    Author : Pakshal Jain
    Date : 20/09/2022
    Program : Accept number from user and print even factors of that number.
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Even Factors of Entered Number
void Display(int No)
{
    int i = 0;

    //If Number Entered is Negative Following Filter is Used To Convert Number Back To Positive
    if(No < 0)
    {
        No = -No;
    }

    printf("Printing Even Factors of %d : \n",No);
    for(i = 1;i <= No;i++)
    {
        if((No % i == 0) && (i % 2 == 0))
        {
            printf("%d\t",i);
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;

    printf("Jay Ganesh....");
    printf("Enter One NUmber...");
    scanf("%d",&No);
    //Call To Dispaly Function
    Display(No);
    return 0;
}