/*
    Author : Pakshal Jain
    Date : 23/10/2022
    Program : Calculate Factorial of Entered Number
*/

//Required Libraroes
#include<stdio.h>

//Function To Calculate Factorial
int Factorial(int No)
{
    int fact = 1;
    int i = 0;

    //Handeling Condition if Entered Number is Less Than 0
    if(No < 0)
    {
        No = -No;
    }

    //Logic
    for(i = No;i > 0;i--)
    {
        fact = fact * i; 
    }

    return fact;
}

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");
    
    printf("Enter one Number\n");
    scanf("%d",&No);

    //Call To Factorual Function
    iret = Factorial(No);

    //Printing Factorial Calculated
    printf("Factorial of Entered numbe is : %d",iret);

    return 0;
}