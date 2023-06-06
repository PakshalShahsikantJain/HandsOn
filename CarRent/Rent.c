/*
    Author : Pakshal Shashikant Jain 
    Date : 05/06/2023
    Program : We have to design application for tourist company.
              Tourist company provides cars on rent.
              Depends on the running of car they apply rent.
              
              If running is less than 100 kilometres then they charge 25
              rupees per kilometre .
              
              And if running is more than 100 kilometres then they apply 15
              rupees per kilometre after 100 kilometres.
    
              We have to accept number of kilometres from user and return
              the estimated rent.
            
              Input : 73 Output : 1825
              Input : 132 Output : 2980
              Input : 189 Output : 3835  
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Car Rent
int Rent(int No)
{
    int rent = 0;

    //Logic To Car Rent

    //Handeling Condition if Entered KM is Less Than 100
    if(No <= 100)
    {
        rent = No * 25;

        return rent;
    }
    //Handeling Condition if Entered KM Is More Than 100
    else 
    {
        rent = No * 15;

        return rent;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    printf("------Marvellous Car Rental Services-----------\n");

    //Taking Input From User
    printf("Enter Running of Car in KM\n");
    scanf("%d",&No);

    //Call To Rent Function
    iret = Rent(No);

    //Printing Rent Calculated
    printf("You Have To Pay Car Rent of : %d INR",iret);

    return 0;
}