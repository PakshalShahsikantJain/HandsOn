/*
    Author : Pakshal Shashikant Jain
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and
              check whether bit at that position is on or off. If bit is one return TURE
              otherwise return FALSE.
            
              Input : 10 2
              Output : TRUE 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Giving To Datatype int 
typedef unsigned int UINT;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CheckBit      //Encapsulation
{
    public :       // Access Sepcifier
        UINT iNo;
        int iPos;

    public :
        CheckBit()   //Default Constructor of Class
        {
            this->iNo = 0;
            this->iPos = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()  
    {
        //Taking Input from user
        cout<<"Enter One Number \n";
        cin>>this->iNo;

        cout<<"Enter Position Number \n";
        cin>>this->iPos;
    }

    //Behaviour of Class TO Check Bit is On or off of number at Entered Position
    bool Check()
    {
        int iMask = 0X00000001;
        int iResult = 0;

        if(this->iNo < 0)
        {
            this->iNo = -this->iNo;
        }

        if((this->iPos < 1)||(iPos > 32))
        {
            return false;
        }

        //Logic To Check
        iMask = iMask << (this->iPos - 1);

        iResult = iMask & this->iNo;

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    bool bret = false;

    cout<<"Jay Ganesh...\n";

    //Creating object of Class Dynamically
    CheckBit *cobj = new CheckBit();
    //Call To Behaviour of Class
    cobj->Accept();
    bret = cobj->Check();

    //Handeling Condition if bret is TRUE
    if(bret == true)
    {
        cout<<"Bit is ON at Postion "<<cobj->iPos<<"\n";
    }
    //Handeling Condition if bret is FAlSE
    else
    {
        cout<<"Bit is OFF at Postion "<<cobj->iPos<<"\n";
    }

    //Deallocating Memory of Object 
    delete(cobj);

    return 0;
}