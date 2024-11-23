/*
    Author : Pakshal Shashikant Jain 
    Date : 06/04/2023
    Program : To print Below Given Pattern

    Input : iRow = 4 iCol = 4
    Output : * * * *
             * * *
             * *
             *
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
void Display(int No,int No2)
{
    int i = 0;
    int j = 0;

    //Logic To print Below Given Pattern
    printf("Printing Below Given Pattern : \n");
    for(i = No;i > 0;i--)
    {
        for(j = 1;j <= No2;j++)
        {
            if(i >= j)
            {
                printf("*\t");
            }
            else 
            {
                printf(" \t");
            }
            
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Number of Rows you Want.\n");
    scanf("%d",&No);

    printf("Enter number of Columns you Want\n");
    scanf("%d",&No2);

    //Call To Display Function
    Display(No,No2);

    return 0;
}