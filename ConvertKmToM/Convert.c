/*
    Author : Pakshal Jain
    Date : 29/10/2022
    Program : To Convert Entered Km into Meter
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Km To meter
int Convert(int No)
{
    int meter = 0;

    meter = No * 1000;

    return meter; 
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter Distance in KM\n");
    scanf("%d",&No);

    //Call To Convert Function
    iret = Convert(No);

    printf("Converted Km into Meter is : %d",iret);

    return 0;
}