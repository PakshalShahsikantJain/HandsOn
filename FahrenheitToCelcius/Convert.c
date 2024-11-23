/*
    Author : Pakshal Jain
    Date : 29/10/2022
    Program : To Convert Entered Temperature in Fahrenheit into Celcius
*/

//Required libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Temperature
double Convert(float Fahrenheit)
{
    double ans = 0.0;

    //Logic
    ans = (Fahrenheit - 32) * 5 / 9;

    return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int Value = 0;  
    double dret = 0.0;
    
    printf("Jay ganesh...\n");

    printf("Enter Temperature in Fahrenheit\n");
    scanf("%d",&Value);

    //Call To Convert Function
    dret = Convert(Value);

    printf("Temperature Converted Into Celcius is : %.2f",dret);

    return 0;
}