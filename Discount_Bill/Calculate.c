/*
    Author : Pakshal Shashikant Jain 
    Date : 20/04/2023
    Program : Design application for hotel. According to the management
              team of hotel they are giving discount on total bill amount of
              customer.
              If bill bill amount is less than 500 then there is no discount , if
              bill amount is less than 1500 and more than 500 they give 10%
              discount.
              And if the bill amount is more than 1500 then they give 15%
              discount.
              Our application should accept total bill amount and depends on
              the discount policy we have to return the amount after applying
              discount.

              Input : 1200 Output : 1080
              Input : 290 Output : 290
              Input : 3700 Output : 3145 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Apply Discount on Entered Bill
float Bill(int No)
{
    float Discount = 0.0f;
    int ans = 0;
    int final = 0;

    //Logic To Apply Discount Accourding To Given Hotel Policy
    if(No < 500)
    {
        return No;
    }
    else if((No >= 500)&&(No <= 1500))
    {
        Discount = (No * 10) / 100;
        final = No - Discount;

        return final;
    }
    else if(No > 1500)
    {
        Discount = (No * 15) / 100;
        final = No - Discount;

        return final; 
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0.0;

    printf("Jay Ganesh....\n");
    
    printf("-------------Welcome To Marvellous Hotel--------------------\n");

    //Taking Input From User    
    printf("Please Enter Your Total Bill Amount\n");
    scanf("%d",&No);

    //Call To Bill Function
    iret = Bill(No);

    //Printing Output According To Given Conditions
    if(No < 500)
    {
        printf("Your Final Bill Amount According to our Discount Policy is : %d",iret);
    }
    else if((No >= 500)&&(No <= 1500))
    {
        printf("Your Final Bill Amount After Getting Discount of 10%% Is : %d",iret);
    }
    else if(No > 1500)
    {
        printf("Your Final Bill Amount After Getting Discount of 15%% Is : %d",iret);
    }

    return 0;
}
