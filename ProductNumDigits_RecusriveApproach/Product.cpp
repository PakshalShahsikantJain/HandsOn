/*
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept number from user and return its
              product of digits.

              Input : 523
              Output : 30 
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
        int imult;

    //Constructor of Class
    public :
        Digits(int value)              //Parameterized Constructor
        {
            this->ino = value;        //Instance Variable of Class (Non - Static)
            this->imult = 1;
        }
    
    //Behaviour of Class To Calculate products of Digits
    int Mult()
    {
        int Digits = 0;

        //Logic 
        Digits = this->ino % 10;
        this->imult = this->imult * Digits;
        this->ino = this->ino / 10;

        if(this->ino != 0)
        {
            //Recursive Function Call To  Behaviour / Function of Class
            this->Mult();    
        }
        else 
        {
            return this->imult;
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
    iret = dobj->Mult();

    //Printing Products Calculated
    cout<<"Products of Digits is : "<<iret;

    return 0;
}