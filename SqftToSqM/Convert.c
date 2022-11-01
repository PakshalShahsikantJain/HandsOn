/*
    Author : Pakshal Jain
    Date : 30/10/2022
    Program : To Convert Entered Square ft into Square Meter
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////

//Function To Convert
double Convert(double No)
{
    double ans = 0.00;

    //Logic
    ans = No * 0.0929;

    return ans;
}

//////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    double fret = 0.0;

    printf("Jay Ganesh...\n");
    
    printf("Enter No in Square Feet\n");
    scanf("%d",&No);

    //Call To Convert Function
    fret = Convert(No);
    //Printing Convertd Squareft to SquareM
    printf("Converted SquareFt to SquareM is : %lf",fret);

    return 0;
}