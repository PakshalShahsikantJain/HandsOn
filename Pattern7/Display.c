/*
    Author : Pakshal Jain 
    Date : 17/02/2023
    Program : To Print Below Pattern 

    Input : 4
    Output : # 1 * # 2 * # 3 * # 4 *
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern 
void Display(int No) 
{
    int i = 0;

    //Function To Print Given Pattern
    for(i = 1;i <= No;i++)
    {
        printf("#  %d  *  ",i);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Number Till You Want To Print...\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}