/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To accept input From User and Print First Five Multiples of That Number
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Multiples
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Multiples(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display() 
    {
        int i = 0;
        int Mult = 0;

        //Logic
        cout<<"Printing First five Multiples of Entered Number\n";
        for(i = 1;i <= 5;i++)
        {
            Mult = No * i;
            cout<<Mult<<"\t";
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From user
    cout<<"Enter One Number...\n";
    cin>>No;

    //Creating object of Multiples Class
    Multiples mobj(No);
    //Call To Behaviour of Class
    mobj.Display();
}