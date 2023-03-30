/*
    Author : Pakshal Shashikant Jain 
    Date : 29/03/2023
    Program : To Print Below Given Pattern

    Input : iRow = 5 iCol = 5 
    Output : $ * * * *
             * $ * * *
             * * $ * *
             * * * $ *
             * * * * $
*/

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
void Display(int No,int No2)
{
    int i = 0;
    int j = 0;

    //Logic To Print Below Given Pattern
    printf("Printing Below Given Pattern : \n");
    for(i = 1;i <= No;i++)
    {
        for(j = 1;j <= No2;j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else 
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter Number of Rows You Want \n");
    scanf("%d",&No);

    printf("Enter Number of Columns You Want\n");
    scanf("%d",&No2);
    
    //Call To Display Function
    Display(No,No2);

    return 0;
}