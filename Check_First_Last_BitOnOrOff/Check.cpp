/*
    Author : Pakshal Shashikant Jain 
    Date : 31/08/2023
    Program : Write a program which checks whether first and last bit is On or
              OFF. First bit means bit number 1 and last bit means bit number 32. 
*/

//Required libraries
#include<iostream>
using namespace std;

typedef unsigned int UINT;

//Class Declaration
class CheckBit
{
    //Characteristics of Class
    private :
        UINT No = 0;

    //Constructor of Class
    public :
        CheckBit()
        {
            this->No = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Taking input from user
        cout<<"Enter One Number \n";
        cin>>this->No;
    }

    //Behaviour of Class To Check First and Last Bits are On or Off
    bool Check()
    {
        int iResult = 0;
        int iMask = 0X80000001;

        if(this->No < 0)
        {
            this->No = -this->No;
        }

        //Logic To Check
        iResult = this->No & iMask;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    bool bret = false;

    cout<<"Jay Ganesh....\n";

    //Creating object of CheckBit Class 
    CheckBit *cobj = new CheckBit();

    //Call To Behaviours of Class
    cobj->Accept();
    bret = cobj->Check();

    if(bret == true)
    {
        cout<<"First and Last Bits are ON";
    }
    else
    {
        cout<<"First or Last Bit is OFF";
    }

    return 0;
}