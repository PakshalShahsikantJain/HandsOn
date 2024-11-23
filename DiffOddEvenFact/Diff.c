/*
    Author : Pakshal Jain
    Date : 17/01/2023
    Program : To Calculate Difference Between Even and Odd Factorial of Entered Number
*/

//Reequired Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Difference
int Difference(int No) 
{

    //Requied Variables
    int i = 0;
    int Diff = 0;
    int EvenFact = 1;
    int OddFact = 1;

    //Handling Condition if Entered Number is Negative
    if(No < 0) 
    {
        No = -No;
    }

    //Logic TO Calculate Difference
    for(i = No;i > 0;i--) 
    {
        if(i % 2 != 0)
        {
            OddFact = OddFact * i;
        }
        else
        {
            EvenFact = EvenFact * i;
        }
    }

    Diff = EvenFact - OddFact;

    return Diff;
}

/////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter Number You Want\n");
    scanf("%d",&No);    

    //Call To Difference Function
    iret = Difference(No);

    //Printing Result Obtained
    printf("Difference Between Even and Odd Factorial of Entered Number is : %d",iret);

    return 0;
}