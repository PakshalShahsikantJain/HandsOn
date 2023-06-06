/*
    Author : Pakshal Shashikant Jain 
    Date : 02/06/2023
    Program : Design application for income tax department to calculate tax
              amount. According to the income tax department there is no
              income tax for the income less than 5 lakhs.

              If income is in between 5 to 10 lakhs then there will be 10% tax.
              If income is in between 10 to 20 lakhs then there will be 20%
              tax.

              And for more than 20 lakhs there will be 30% tax.
              We have t0o accept gross income from user and return the tax
              amount. 

*/

//Required Libraries 
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Income Tax
float TaxCalc(int No)
{
    float ans = 0.0;

    //Logic 

    //Handeling Condition if Income is Less Than 5L
    if(No < 500000)
    {
        return ans;
    }

    //Handeling Condition if Income is in Between 5L and 10L
    else if((No >= 500000)&&(No < 1000000))
    {
        ans = (No * 10) / 100;

        return ans;
    }

    //Handeling Condition if Income is in Between 10L and 20L
    else if((No >= 1000000)&&(No <= 2000000))
    {
        ans = (No * 20) / 100;

        return ans;
    }

    //Handeling Condition if Income is Greater Than 20L
    else 
    {
        ans = (No * 30) / 100;

        return ans;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;
    float fret = 0.0;

    printf("Jay Ganesh....\n");
    printf("------------------Marvellous Income Tax Calculator--------------------\n");

    //Enter You Gross Income
    printf("Enter Your Income\n");
    scanf("%d",&No);

    //Call To TaxCalc Function
    fret = TaxCalc(No);

    //Printing Income Tax Calculated
    printf("You Have To Pay Taxable Amount of : %.1f INR",fret);
 
    return 0;
}