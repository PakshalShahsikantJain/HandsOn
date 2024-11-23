/*
    Author : Pakshal Jain
    Date : 18/01/2023
    Program : Accept number from user and display below pattern.
              
    Input : 5
    Output : A B C D E
*/

//Reuqired Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
void Display(int No)
{
    int sum = 0;
    int i = 0;
    
    //Logic To Print Given Pattern
    printf("Printing Given Pattern \n");
    for(i = 0;i < No;i++)
    {
        sum = i + 65;

        printf("%c\t",sum);    
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    printf("Jay Ganesh.....\n");

    //Taking Input From User
    printf("Enter Number Till You Want To Display Given Pattern\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);    

    return 0;
}