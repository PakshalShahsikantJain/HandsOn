/*
    Author : Pakshal Shashikant Jain 
    Date : 05/09/2023
    Program : Write a program which accept one number and position from user and ON
              that bit. Return modified number.

              Input : 10 3
              Output : 14 
*/

//Required Libraries
#include<iostream>
using namespace std;

//Giving New Name to Data Type unsigned int i.e UINT
typedef unsigned int UINT;

//Base Class Declaration
class Bit
{
    //Characteristics of Class
    public :
        UINT iNo;
        int iPos;
        
        //Constructor of Class
        Bit()
        {
            this->iNo = 0;
            this->iPos = 0;
        }

    //Behaviour of Base Class To Take Input from user
    void Accept()
    {
        //Taking Input from user
        cout<<"Enter One Number \n";
        cin>>this->iNo;

        cout<<"Enter One Position \n";
        cin>>this->iPos;
    }

};//End of Base Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Derived Class Declaration
class OnBit : public Bit
{
    //Characteristics of Class
    public : 
        int iMask;
        int iResult;

    //Constructor of Class
    public :
        OnBit()
        {
            this->iMask = 0X00000001;
            this->iResult = 0;
        }
    
    //Behaviour of Class To On Bit At Entered Position
    UINT On()
    {
        if(this->iNo < 0)
        {
            this->iNo = -this->iNo;
        }

        if((this->iPos < 1)||(this->iPos > 32))
        {
            return 0;
        }

        //Logic To On Bit
        this->iMask = this->iMask << (this->iPos - 1);
        this->iResult = this->iMask & this->iNo;

        if(this->iResult != this->iMask)
        {
            this->iResult = this->iMask ^ this->iNo;
        }
        else
        {
            this->iResult = this->iNo;
        }
        
        return this->iResult;
    }
};//End of Derived Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    UINT iret = 0;

    cout<<"Jay ganesh....\n";

    //Creating object of Base Class
    Bit bobj;

    //Creating object of Derived Class
    OnBit obj;

    //Printing Sizes of Classes
    cout<<"Size of Bit Class is : "<<sizeof(bobj)<<"\n";
    cout<<"Size of CheckBit Class is : "<<sizeof(obj)<<"\n";

    //Call To Behaviour of Base Class using Derived Class Object 
    obj.Accept();
    
    //Call To Behaviour of Derived Class 
    iret = obj.On();
    
    //Handeling Condition if Bit is Already On
    if(iret == obj.iNo)
    {
        cout<<"Bit is Already On \n";
        return 0;
    }

    //Printin Modified Number
    cout<<"Modified Number is : "<<iret<<"\n";
    
    return 0;
}