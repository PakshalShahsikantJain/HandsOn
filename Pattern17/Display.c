/*
    Author : Pakshal Shashikant Jain
    Date : 16/03/2023
    Program : To Print Below Given Pattern 

    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4
             5 6 7 8
             9 1 2 3
             4 5 6 7 

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern 
void Display(int No,int No2)
{
    int i = 0;
    int j = 0;
    int k = 1;

    //Logic To Print Pattern
    printf("Printing Below Given Pattern\n");
    for(i = 0;i < No;i++)
    {
        for(j = 0;j < No2;j++)
        {
            printf("%d\t",k);
            k++;
            
            if(k > 9)
            {
                k = 1;
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

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter Number of Rows\n");
    scanf("%d",&No);

    printf("Enter Number of Columns\n");
    scanf("%d",&No2);

    //Call To Display Function
    Display(No,No2);

    return 0;
}