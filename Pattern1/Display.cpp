/*
    Author : Pakshal Jain
    Date : 14/09/2022
    Program : To Print * Entered Number of Times
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Pattern 
{
    //Chracteristics of Class
    private : 
        int No = 0;
    //Constructor of Class
    public : 
        //Parameterised Of Class
        Pattern(int no) 
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        printf("Printing * %d Times : \n",this->No);
        for(i = 0;i < this->No;i++)
        {
            printf("*\t");
        }
    }

    //Destructor of class
    ~Pattern()
    {
        cout<<"\nInside Destrutor of Class";
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    cout<<"Jay Ganesh.....\n";

    cout<<"Enter One Number...\n";
    scanf("%d",&No);

    //Creating object of Class
    Pattern pobj(No);
    //Calling Behaviour of Class
    pobj.Display();

    return 0;
}