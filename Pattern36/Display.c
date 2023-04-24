/*
    Author : Pakshal Shashikant Jain 
    Date : 19/04/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4 5
             1 2     5
             1   3   5
             1     4 5
             1 2 3 4 5 
*/

//Required libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern 
void Display(int No,int No2)
{
    int i = 0;
    int j = 0;

    //Logic To Print Given Pattern 
    printf("Printing Below Given Pattern \n");
    for(i = 1;i <= No;i++)
    {
        for(j = 1;j <= No2;j++)
        {
            if((i == j)||(i == 1)||(j == 1)||(i == No)||(j == No2))
            {
                printf("%d\t",j);
            }
            else 
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    printf("Ganapati Bappa Morya...\n");

    //Taking Input From User
    printf("Enter Number of Rows You Want \n");
    scanf("%d",&No);

    printf("Enter Number of Columns You Want \n");
    scanf("%d",&No2);

    //Call To Display Function
    Display(No,No2);

    return 0;
}