/*
    Author : Pakshal Jain 
    Date : 02/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 3 iCol = 5
    Output : 5 4 3 2 1
             5 4 3 2 1
             5 4 3 2 1 
*/

//Required Libraries
#include<stdio.h>

//Function To Print Given Pattern
void Pattern(int No,int No2)
{
    int i = 0;
    int j = 0;

    //Logic To Print Pattern
    printf("Printing Given Pattern : \n");
    for(i = 1;i <= No;i++)
    {
        for(j = No2;j > 0;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

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

    //Call To Pattern Function
    Pattern(No,No2);

    return 0;
}
