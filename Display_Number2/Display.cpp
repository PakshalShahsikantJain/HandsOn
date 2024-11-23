/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To accept number from user and print numbers till that number
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declarartion
class Pattern
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Pattern(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        //Logic
        cout<<"Printing Number Till Entered Number\n";
        for(i = 1;i <= this->No;i++)
        {
            cout<<i<<"\t";
        }
    }
};

//Main Function
int main() 
{
    int No  = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter One Number\n";
    cin>>No;

    //Creating Object of Pattern Class
    Pattern pobj(No);
    //Calling Behaviour of Class
    pobj.Display();

    return 0;
}