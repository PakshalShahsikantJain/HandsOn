/*
    Author : Pakshal Jain
    Date : 11/09/2022
    Program : To Print Entered Numbers Till 1
*/

//Importing Required Imports
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Numbers
void Display(int No) 
{
    int i = 0;

    printf("Printing Numbers From %d Number Till 1\n",No);

    for(i = No;i > 0;i--)
    {
        printf("%d ",i);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;
    
    printf("Ganpati Bappa Morya.....\n");
    
    printf("Enter one Number\n");
    scanf("%d",&No);

    Display(No);

    return 0;
}