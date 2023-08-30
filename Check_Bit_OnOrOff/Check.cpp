/*
    Author : Pakshal Shashikant Jain
    Date : 30/08/2023
    Program : Write a program which checks whether 15th bit is On or OFF.
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Giving New Name To Datatype unsigned int i.e UINT 
typedef unsigned int UINT;

//Class Declaration
class CheckBit
{
    //Characteristics of Class
    private :
        UINT No;
    
    //Constructor of Class
    public :    
        CheckBit()
        {
            this->No = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Taking Input from user
        cout<<"Enter One Number \n";
        cin>>this->No;
    }

    //Behaviour of Class To Check Bit is on or off
    bool ChkBit()
    {                                    //  0     0     0     0     4     0     0     0
        int iMask = 0X00004000;          // 0000  0000  0000  0000  0100  0000  0000  0000
        int iResult = 0;

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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    bool bret = false;

    cout<<"Jay Ganesh....\n";

    //Creating object of CheckBit Class
    CheckBit *cobj = new CheckBit();

    //Call To Behaviour of Class
    cobj->Accept();
    bret = cobj->ChkBit();

    //Handeling Condition if bret is TRUE
    if(bret == true)
    {
        cout<<"15th Bit is ON";
    }
    //Handeling Condition if bret if FALSE
    else
    {
        cout<<"15th Bit is OFF";
    }

    return 0;
}