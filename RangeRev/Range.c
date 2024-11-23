/*
    Author : Pakshal Jain
    Date : 11/12/2022
    Program : To Display Entered Range in Reverse Order
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Display Range in Reverse Order
void Display(int No,int No2) 
{
    int i = 0;

    //logic
    printf("Printing Entered Range in Reverse Order : \n");
    for(i = No2;i >= No;i--)
    {
        printf("%d\t",i);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    //Required Variables
    int No = 0;
    int No2 = 0;

    printf("Jay ganesh...\n");

    //Taking Input From User
    printf("Enter Starting Number\n");
    scanf("%d",&No);

    printf("Enter Ending Number\n");
    scanf("%d",&No2);

    //Handeling Condition if Entered Starting Number is Greater Than Ending Number
    if(No >  No2)
    {
        printf("Invalid Range\n");
        return -1;
    }
    
    //Call To Display Function
    Display(No,No2);

    return 0;
}