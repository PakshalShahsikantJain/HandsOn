/*  
    Author : Pakshal Jain
    Date : 12/12/2022
    Program : To Print Below Pattern 
    
    Input : 5
    Output : * * * * * # # # # #

    Input : 6
    Output : * * * * * * # # # # # # #
    
    Input : -5
    Output : * * * * * # # # # #
    
    Input : 2
    Output : * * # #
*/

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
void Display(int No)
{
    int i = 0;

    printf("Printing Above Given Pattern\n");

    //Handeling Condition if Entered Number is Negative
    if(No < 0)
    {
        No = -No;
    }

    //Logic To Print Pattern
    for(i = 0;i < No;i++)
    {
        printf("*\t");
    }

    for(i = 0;i < No;i++)
    {
        printf("#\t");
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter One Number...\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);
    
    return 0;
}