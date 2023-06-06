/*
    Author : Pakshal Shashikant Jain 
    Date : 04/06/2023
    Program : Design application for school management system.
              As school is primary there are 4 standards from 1 to 4.
              School fees of each standard is different.
              For first standard fees are 8900, for second standard 12790, for
              third standard 21000 and for fourth standard fees are 23450.
              We have to accept standard from user and display the
              corresponding fees. 
*/

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Fees
int SchoolFees(int No)
{
    int fee = 0;

    //Logic To Display Fees According To Condition
    switch(No)  
    {
        case 1 : 
            fee = 8900;
            return fee;
        case 2 :
            fee = 12790;
            return fee;
        case 3 : 
            fee = 21000;
            return fee;
        case 4 :
            fee = 23450;
            return fee;
        default :
            printf("Invalid Input");
            exit(0);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh....\n");
    printf("---------Welcome To Marvellous International Primary School----------\n");

    //Taking Input From User
    printf("Enter Your Standard (1,2,3,4)\n");
    scanf("%d",&No);

    //Call To SchollFess Function
    iret = SchoolFees(No);

    //Printing Fess According To Standard Entered s
    printf("Your Fees is : %d\n",iret);

    return 0;
}