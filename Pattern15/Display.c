/*
    Author : Pakshal Shashikant Jain 
    Date : 14/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 3 iCol = 5
    Output : A A A A A
             B B B B B
             C C C C C
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
void Display(int No,int No2)
{
    int i = 0;
    int j = 0;

    //Logic To Print Pattern
    printf("Printing Below Given Pattern\n");
    for(i = 0;i < No;i++)
    {
        for(j = 0;j < No2;j++)
        {
            printf("%c\t",i + 65);
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter Number of Rows You Want\n");
    scanf("%d",&No);

    printf("Enter Number of Columns You Want\n");
    scanf("%d",&No2);

    //Call To Display Function
    Display(No,No2);

    return 0;
}