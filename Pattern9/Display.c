/*
    Author : Pakshal Jain
    Date : 19/02/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 3
    Output :    1 2 3
                1 2 3
                1 2 3
                1 2 3 
*/

//Required Libraries
#include<stdio.h>

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
            printf("%d\t",j);
        }
        printf("\n");
        j = 0;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    printf("Ganapati Bappa Morya...\n");

    //Taking Input From User
    printf("Enter Number of Rows You Want\n");
    scanf("%d",&No);

    printf("Enter Number of Columns You Want\n");
    scanf("%d",&No2);

    //Call To Display Function
    Display(No,No2);

    return 0;
}