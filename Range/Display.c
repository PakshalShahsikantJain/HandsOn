/*
    Author : Pakshal Jain
    Date : 4/11/2022
    Program : To Accept Range From User and Print Numbers Between Entered Number
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Numbers
void Display(int No,int No2)
{
    int i = 0;  

    //Handeling Condition if Entered Starting Number is Greater Than Zero
    if(No > No2)
    {
        printf("Invaid Range");
        return;
    }
    
    //Logic
    printf("Printing Numbers In between Entered Range..\n");

    for(i = No;i <= No2;i++)
    {
        printf("%d\t",i);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh....\n");

    printf("Enter Starting Number..\n");
    scanf("%d",&No);

    printf("Enter Ending Number...\n");
    scanf("%d",&No2);

    //Call To Display Function
    Display(No,No2);

    return 0;
}