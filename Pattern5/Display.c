/*
    Author : Pakshal Jain
    Date : 19/01/2021
    Program : Accept number from user and display below pattern.

    Input : 5
    Output : 5 # 4 # 3 # 2 # 1 # 
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern 
void Display(int No) 
{
    int i = 0;

    //Logic To Print Given Pattern
    printf("Printing Given Pattern\n");
    for(i = No;i > 0;i--)
    {
        printf("%d\t#\t",i);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Any Number You Want\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}