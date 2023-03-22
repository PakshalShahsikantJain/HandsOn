/*
    Author : Pakshal Shashikant Jain 
    Date : 18/03/2023
    Program : To Print Below Given Pattern
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4
             2 3 4 5
             3 4 5 6
             4 5 6 7 
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern 
void Pattern(int No,int No2)
{
    int i = 0;
    int j = 0;
    int k = 1;

    //Logic To Print Pattern
    printf("Printing Below Given Pattern : \n");
    for(i = 0;i < No;i++)
    {
        for(j = 0;j < No2;j++)
        {
            printf("%d\t",k);
            k++;

            if(j == No2 - 1)
            {
                k = k - 3;
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    //Taking Input From User
    printf("Enter Number of Rows you Want...\n");
    scanf("%d",&No);

    printf("Enter Number of Columns You Want....\n");
    scanf("%d",&No2);

    //Call To Pattern Function
    Pattern(No,No2);

    return 0;
}