/*
    Auhtor : Pakshal Jain
    Date : 06/10/2022
    Program : TO Find Difference Between Summation of Factors and Nonfactors of Entered Number
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Difference
int FactDiff(int No)
{
    int i = 0;
    int sum = 0;
    int sum2 = 0;
    int diff = 0;

    for(i = 1;i < No;i++)
    {
        if(No % i == 0)
        {
            sum = sum + i;
        }
        else if(No % i != 0)
        {
            sum2 = sum2 + i;
        }
    }

    diff = sum - sum2;

    return diff;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");
    
    printf("Enter one Number\n");
    scanf("%d",&No);

    //Call TO Difference Function
    iret = FactDiff(No);

    printf("Difference Between Summation of Factors and Nonfactors is : %d",iret);

    return 0;
}