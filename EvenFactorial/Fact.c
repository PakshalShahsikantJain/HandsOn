/*
    Author : Pakshal Jain
    Date : 17/12/2022
    Program : To Calculate Even Factorial of Entered Number
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Even Factorial of Entered Number
int EvenFactorial(int No) 
{
    int i = 0;
    int Fact = 1;

    //Handeling Condition if Entered Number is Negative
    if(No < 0)
    {
        No = -No;
    }

    //Logic To Calculate Even Factorial
    for(i = No;i > 0;i--)
    {
        if(i % 2 == 0)
        {
            Fact = Fact * i;
        }
    }

    return Fact;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    printf("Ganapti Bappa Morya\n");

    //Taking Input From User
    printf("Enter one Number To Calculate Even Factorial of \n");
    scanf("%d",&No);

    //Call To Even Factorial Function
    iret = EvenFactorial(No);

    //Printing Obtained Output
    printf("Even Factorial of Entered Number is : %d",iret);

    return 0;
}