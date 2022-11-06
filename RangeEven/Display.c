/*
    Author : Pakshal Jain
    Date : 06/11/2022
    Program : To Print Even Number in between Entered Range
*/

//Required Libraries
#include<stdio.h>

//function To Display Even Number
void Display(int No,int No2)
{
    int i = 0;

    //logic

    printf("Printing Even Numbers in Entered Range\n");
    
    for(i = No;i <= No2;i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t",i);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh...\n");
    
    printf("Enter Starting Number...\n");
    scanf("%d",&No);

    printf("Enter Ending Number...\n");
    scanf("%d",&No2);

    //call To Display Function
    Display(No,No2);

    return 0;
}