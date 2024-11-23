/*
    Author : Pakshal Shashikant Jain 
    Date : 15/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 3 iCol = 4
    Output : 1 2 3 4
             5 6 7 8
             9 10 11 12 
*/

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
void Display(int No,int No2)
{
    int i = 0;
    int j = 0;
    int no = 1;

    //Logic To Print Pattern 
    printf("Printing Given Pattern\n");
    for(i  = 0;i < No;i++)
    {
        for(j = 0;j < No2;j++)
        {
            printf("%d\t",no);
            no = no + 1;
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Number of Rows You Want\n");
    scanf("%d",&No);

    printf("Enter Number of Columns You Want\n");
    scanf("%d",&No2);

    //Call To Display Function
    Display(No,No2);

    return 0;
}