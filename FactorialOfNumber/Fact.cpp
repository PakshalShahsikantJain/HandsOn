/*
    Author : Pakshal Jain
    Date : 23/10/2022
    Program : To Calculate Factorial of Entered Number
*/

//Required Library
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Factorial
int Fact(int No)
{
    int i = 0;
    int Fact = 1;

    //Handeling Function if Entered Number is Negative
    if(No < 0)
    {
        No = -No;
    }

    //Logic
    for(i = No;i > 0;i--)
    {
        Fact = Fact * i;
    }

    return Fact;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User   
    cout<<"Enter one number\n";
    cin>>No;

    //Call To Fact Function
    iret = Fact(No);

    //Printing Factorial of Entered Number
    cout<<"Factorial of Entered Number is : "<<iret;

    return 0;
}