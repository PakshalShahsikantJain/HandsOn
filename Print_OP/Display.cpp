/*
    Author : Pakshal Jain
    Date : 17/09/2022
    Program : To Print Hello if Entered Number is Less 10 or else Print Demo
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Print
{ 
    //Chracteristics of Class  
    private : 
        int No = 0;
    //Constructors of Class
    public :
        Print(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display()
    {
        if(this->No < 10)
        {
            cout<<"Hello\n";
        }
        else 
        {
            cout<<"Demo\n";
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;

    cout<<"Ganapati Bappa Morya....\n";
    
    cout<<"Enter One Number\n";
    scanf("%d",&No);

    //Creating Object of Class
    Print pobj(No);
    //Calling Behaviour of Class
    pobj.Display();

    return 0;
}