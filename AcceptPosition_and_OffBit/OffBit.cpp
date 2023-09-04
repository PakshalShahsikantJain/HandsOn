/*
    Author : Pakshal Shashikant Jain 
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and off
              that bit. Return modified number.

              Input : 10 2
              Output : 8 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

typedef unsigned UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Bit
{
    //Characteristics of Class
    public :
        UINT iNo;
        int iPos;

    //Constructor of Class
    public :
        //Default Constructor of Class
        Bit()
        {
            this->iNo = 0;
            this->iPos = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        cout<<"Enter One Number \n";
        cin>>this->iNo;

        cout<<"Enter One Position\n";
        cin>>this->iPos;
    }

    //Behaviour of Class To Off Entered Bit
    UINT OffBit()
    {
        int iMask = 0X00000001;
        UINT iResult = 0;

        if(this->iNo < 0)
        {
            this->iNo = -this->iNo;
        }

        if((this->iPos < 1)||(this->iPos > 32))
        {
            return 0;
        }

        //Logic to Off Bit At Entered Position
        iMask = iMask << (this->iPos - 1);
        iResult = iMask & this->iNo;

        if(iResult == iMask)
        {
            iResult = iMask ^ this->iNo;
        }

        return iResult;
    }   
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    UINT iret = 0;

    cout<<"Jay Ganesh...\n";

    //Creating object of Bit Class
    Bit *bobj = new Bit();

    //Call To Behaviour of Class
    bobj->Accept();
    iret = bobj->OffBit();

    //Printing Modified Number
    cout<<"Modified Number is : "<<iret;

    //Deallocating Memory of Object 
    delete bobj;

    return 0;
}