/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and return
              summation of its digits.
              Input : 879
              Output : 24 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Digits
{
    //Characteristics of Class
    private :
        int ino;               //Instance Variable of Class
        int sum;

    //Constructor of Class
    public :
        Digits(int value)              //Parameterized Constructor
        {
            this->ino = value;        //Instance Variable of Class (Non - Static)
            this->sum = 0;
        }
    
    //Behaviour of Class To Calculate Summation of Digits
    int SumDigits()
    {
        int Digits = 0;

        //Logic 
        Digits = this->ino % 10;
        this->sum = this->sum + Digits;
        this->ino = this->ino / 10;

        if(this->ino != 0)
        {
            //Recursive Function Call To SumDigits Behaviour / Function of Class
            this->SumDigits();    
        }
        else 
        {
            return this->sum;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    //Taking Input From User
    cout<<"Enter Any one or More Digit Number : ";
    cin>>ino;

    //Creating Object of Digits Class
    Digits *dobj = new Digits(ino);

    //Call To Beahaviour of Class
    iret = dobj->SumDigits();

    //Printing Summation Calculated
    cout<<"Summation of Digits is : "<<iret;

    return 0;
}