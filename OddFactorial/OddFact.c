/*
    Author : Pakshal Jain
    Date : 14/01/2023
    Program : To Calculate OddFactorial of Given Number
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Odd Factorial of Given Number
int OddFact(int No) 
{   
    int i = 0;
    int Fact = 1;

    //Handeling Condition if Entered Number is Negative
    if(No < 0)
    {
        No = -No;
    }

    //Logic To Calculate
    for(i = No;i > 0;i--)
    {
        if(i % 2 != 0)
        {
            Fact = Fact * i;
        }
    }

    return Fact;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Number You Want To Calculate Odd Factorial of Entered Number\n");
    scanf("%d",&No);

    //Call To OddFact Function
    iret = OddFact(No);

    //Printing Obtained Output
    printf("Odd Factorial of Entered Number is : %d",iret);

    return 0;
}