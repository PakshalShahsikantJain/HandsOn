/*
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To Check Whether Entered Number is Even or Not
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Check
{
    //Chracteristics of Class
    private : 
        int No = 0;
    //Constructor of Class(Parameterised)
    public :
        Check(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    bool check()
    {
        if(this->No % 2 == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

int main()
{
    int No = 0;
    bool bret = false;

    cout<<"Jay Ganesh....\n";
    cout<<"Enter One Number....\n";
    cin>>No;

    //Creating Object of Class   
    Check cobj(No);
    //call Behaviour of Class
    bret = cobj.check();

    if(bret == true)
    {
        cout<<"Entered Number is Even....\n";
    }
    else 
    {
        cout<<"Entered Number is Odd....\n";
    }
    
    return 0;
}