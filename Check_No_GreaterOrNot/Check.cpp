/*
    Author : Pakshal Jain
    Date : 09/10/2022
    Program : To Accept One Number From User And check Whether Entered Number is Greater Than 100 or Not
*/

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Check
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Check(int no)
        {
            this->No = no;
        }
    //Bheaviour of Class
    bool check()
    {
        if(this->No > 100)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    bool bret = false;

    cout<<"Jay Ganesh....\n";

    cout<<"Enter one number\n";
    cin>>No;

    //Creating object of Class
    Check cobj(No);
    //Calling Behaviour of Class
    bret = cobj.check();

    if(bret == true)
    {
        printf("Entered Number %d is Greater Than 100\n",No);
    }
    else 
    {
        printf("Entered Number %d is less Than 100\n",No);
    }

    return 0;
}