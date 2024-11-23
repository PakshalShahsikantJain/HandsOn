/*
    Author : Pakshal Jain 
    Date : 19/02/2023
    Program : To Print Given Below Pattern

    Input : iRow = 4 iCol = 3
    Output : * * *
             * * *
             * * *
             * * * 
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
void Display(int Row,int Col)
{
    int i = 0;
    int j = 0;

    //Logic To Print Pattern 
    printf("Printing Given Pattern\n");
    for(i = 1;i <= Row;i++)
    {
        for(j = 1;j <= Col;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int Row = 0;
    int Col = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter Number of Rows You Want\n");
    scanf("%d",&Row);

    printf("Enter Number of Columns You Want\n");
    scanf("%d",&Col);   

    //Call To Display Function
    Display(Row,Col);

    return 0;
}