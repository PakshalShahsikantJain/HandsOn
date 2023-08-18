/*
    Author : Pakshal Jain
    Date : 16/10/2022
    Program : To Check Whether Entered Number Conatins Zero in it or not
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Find
{
    //Chracteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Find(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    bool Check()
    {
        int Digit = 0;

        //Logic To Entered Number Contains Zero or Not
        while(this->No != 0)
        {
            Digit = this->No % 10;
            if(Digit == 0)
            {
                break;
            }
            this->No = this->No / 10;
        }

        //Handeling Condition if Number Contains Zero
        if(Digit == 0)
        {
            return true;
        }
        //Handeling Condition if Number Does Not Contains Zero
        else 
        {
            return false;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    bool bret = false;

    cout<<"Jay Ganesh...\n";
    
    //Taking input from user
    cout<<"Enter Any Two or More Digit Number\n";
    cin>>No;

    //Creating object of Find Class
    Find fobj(No);
    //Calling Behviour of Find Class
    bret = fobj.Check();

    //Handeling Condition if Return Value is True
    if(bret == true)
    {
        cout<<"Entered Number Contains Zero in it\n";
    }
    //Handeling Condition if Return Value if False
    else 
    {
        cout<<"Entered Number Does Not Contains Zero in it\n";
    }

    return 0;
}