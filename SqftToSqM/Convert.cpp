/*
    Author : Pakshal Jain
    Date : 30/10/2022
    Program : To Convert Entered Sqft To Sqm;
*/

//Required Librarie
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declarartion
class Convert
{
    //Charactereristics of Class
    private :
        double No = 0.0;
    //Constructor of Class
    public :
        Convert(double no)
        {
            this->No = no;
        }
    //Behaviour of Class
    double sqftTosqm()
    {
        double ans = 0.0;

        ans = this->No * 0.0929;

        return ans;
    }    
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    double fret = 0.0;

    cout<<"Jay Ganesh....\n";

    //Taking Input From User
    cout<<"Enter Sqft To Convert into Sqm\n";
    cin>>No;

    //Creating object of Convert Class
    Convert cobj(No);

    fret = cobj.sqftTosqm();
    cout<<"Converted Sqft To SqM is : "<<fret;

    return 0;
}