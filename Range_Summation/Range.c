/*
    Author : Pakshal Jain
    Date : 22/11/2022
    Program : To Calucate Summation of Numbers in Entered Range
*/

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Summation
int Summation(int No,int No2)
{
    int i = 0;
    int sum = 0;

    //Logic 
    for(i = No;i <= No2;i++)
    {
        sum = sum + i;
    }

    return sum;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;
    int iret = 0;

    printf("Jay Ganesh.....\n");

    //Taking Input From User    
    printf("Enter Starting Number..\n");
    scanf("%d",&No);

    printf("Enter Ending Number...\n");
    scanf("%d",&No2);

    //Handeling Condition if Entered is Negative
    if((No < 0)||(No2 < 0))
    {
        printf("Invalid Range\n");
        return -1;
    }
    //Handeling Condition if Entered Starting Number is Greater Than Ending Number
    else if(No > No2)
    {
        printf("Invalid Range\n");
        return -1;
    }

    //Call To iret Function
    iret = Summation(No,No2);

    printf("Summation of Numbers in Entered Range is : %d",iret);

    return 0;
}