/*
    Author : Pakshal Shashikant Jain
    Date : 16/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 4
    Output : 2 4 6 8 10
             1 3 5 7 9
             2 4 6 8 10
             1 3 5 7 9 
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
void Display(int No,int No2)
{
    int i = 0;
    int j = 0;
    int no = 0;
    int k = 1;
    int l = 1;

    //Logic To Print Pattern 
    printf("Printing Below Given Pattern : \n");
    for(i = 0;i < No;i++)
    {
        for(j = 0;j < No2;j++)
        {
            if(i % 2 == 0)
            {
                no = k * 2;
                printf("%d\t",no);
                k = k + 1;
            }
            else 
            {
                printf("%d\t",l);
                l = l + 2;
            }
        }
        k = 1;
        l = 1;
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh.....\n");
    
    //Taking input From User
    printf("Enter Number of Rows You Want\n");
    scanf("%d",&No);
    
    printf("Enter Number of Columns You Want\n");
    scanf("%d",&No2);

    //Call To Display Function
    Display(No,No2);

    return 0;
}
