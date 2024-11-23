/*
    Author : Pakshal Jain 
    Date : 16/02/2023
    Program : To Print Given Below Pattern
    
    Input : 5
    Output : 1 * 2 * 3 * 4 * 5 * 
*/

//////////////////////////////////////////////////////////////////////////////////////

//Reqired Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////

void Display(int No)
{
    int i = 0;

    printf("Printing Given Pattern\n");
    for(i = 1;i <= No;i++)
    {
        printf("%d\t*\t",i);
    }
}

////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;

    printf("Jay Ganesh...\n");
    
    //Taking Input From User
    printf("Enter Number Till You Want To Print\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}