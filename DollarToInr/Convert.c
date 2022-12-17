/*
    Author : Pakshal Jain
    Date : 15/12/2022
    Program : To Convert Entered Money From Dollar To Inr
*/

////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Money
int Convert(int No)
{
    int ans = 0;

    //logic 

    //1 Dollar = 70 INR
    ans = No * 70;

    return ans;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay ganesh...\n");

    //Taking Input From User
    printf("Enter Money in $\n");
    scanf("%d",&No);

    //Call To Convert Function
    iret = Convert(No);

    //Printing Obtained Output
    printf("Monvey Converted From Dollar to Inr is : %d",iret);

    return 0;
}