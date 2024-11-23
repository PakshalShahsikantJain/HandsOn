/*
    Author : Pakshal Jain
    Date : 12/12/2022
    Program : To Print Below Pattern

    Input : 5
    Output : * * * * * # # # # #

    Input : 6
    Output : * * * * * * # # # # # # #
    
    Input : -5
    Output : * * * * * # # # # #
    
    Input : 2
    Output : * * # #

*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Chracteristics of Class
    private :
        int No;
    //Constructor of Class
    public :
        //Parameterised Constructor 
        Pattern(int no)
        {
            //Handeling Condition if Entered Number is Negative
            if(no < 0)
            {
                no = -no;
            }

            this->No = no;
        }
    
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        //Logic To Print Pattern
        for(i = 0;i < No;i++)
        {
            cout<<"*\t";
        }

        for(i = 0;i < No;i++)
        {
            cout<<"#\t";
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter One Number\n";
    cin>>No;

    //Creating Object of Class
    Pattern pobj(No);

    //Call To Behaviour of Class    
    pobj.Display();

    return 0;
}