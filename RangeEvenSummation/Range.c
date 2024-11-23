/*
    Author : Pakshal Jain
    Date : 24/11/2022
    Program : To Calculate Summation of Even Numbers in Entered Range
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Summation
int Summation(int No,int No2)
{
    int i = 0;
    int Sum = 0;

    //Logic
    for(i = No;i <= No2;i++)
    {
        if(i % 2 == 0)
        {
            Sum = Sum + i;
        }
    }

    return Sum;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    int No2 = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");
    
    printf("Enter Starting Number\n");
    scanf("%d",&No);

    printf("Enter Ending Number\n");
    scanf("%d",&No2);

    //Handeling Condition if Entered number is Negative
    if((No < 0)||(No2 < 0))
    {
        printf("Invalid Range");
        return -1;
    }
    //Handeling Condition if Starting Number is Greter Than Ending Number
    else if(No > No2)
    {
        printf("Invalid Range");
        return -1;
    }

    //Call To Summation Function
    iret = Summation(No,No2);

    //Printing Obtained Output
    printf("Summation of Even Number in Entered Range is : %d",iret);

    return 0;
}