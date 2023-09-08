/*
    Author : Pakshal Shashikant Jain 
    Date : 05/09/2023
    Program : Write a program which accept one number and position from user and
              toggle that bit. Return modified number. 

              Input : 10 3
              Output : 14 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Giving new name To Data Type unsigned int i.e UINT
typedef unsigned int UINT;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Base Class Declaration
class Bit
{   
    public :  //Access Specifier

        //Characteristics of Class
        UINT iNo;
        int iPos;

        //Constructor of Class
        Bit()
        {
            //Intializing Instance variable of Class
            this->iNo = 0;
            this->iPos = 0;
            cout<<"Inside Constructor of Bit Class \n";
        }

    //Behaviour of Class TO Take Input from user
    void Accept()
    {
        //Taking Input from user
        cout<<"Enter One Number \n";
        cin>>this->iNo;

        cout<<"Enter One Position \n";
        cin>>this->iPos;
    }

    //Destructor of Class
    ~Bit()
    {
        cout<<"Inside Destructor of Bit Class \n";
    }
};//End of Base Class Declaration

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Derived Class Declaration
class Toggle : public Bit   //Single Levele Inheritance
{
    //Characterstics of Class
    int iMask;
    int iResult;

    public :  //Access Specifier

        //Constructor of Class
        Toggle()
        {
            this->iMask = 0;
            this->iResult = 0;
            cout<<"Inside Constructor of Toggle Class \n";
        }

    //Behaviour of Class To Toggle Bit At Entered Position
    UINT ToggleBit() 
    {
        this->iMask = 0X00000001;
        
        if(this->iNo < 0)
        {
            this->iNo = -this->iNo;
        }

        if((this->iPos < 1)||(this->iPos > 32))
        {
            return 0;
        }

        //Logic To Toggle Bit 
        this->iMask = this->iMask << (this->iPos - 1);
        this->iResult = this->iMask ^ this->iNo;

        return this->iResult;
    }

    //Destructor of Class
    ~Toggle()
    {
        cout<<"Inside Destructor of Toggle Class \n";
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iret = 0;
    cout<<"Jay Ganesh....\n";

    //Printing Size of Classes
    cout<<"Size of Bit Class is : "<<sizeof(Bit)<<"\n";
    cout<<"Size of Toggle Bit Class is : "<<sizeof(Toggle)<<"\n";

    //Creating object of Toggle Class Dynamically    
    Toggle *tobj = new Toggle();

    //Call To Behaviour of Bit Class using Object of Toggle Class
    tobj->Accept();

    //Call To Behaviour of Toggle Class
    iret = tobj->ToggleBit();

    //Printing Modified Number
    cout<<"Modified Number is : "<<iret<<"\n";

    //Deallocating Memory of Object Allocated
    delete tobj;

    return 0;
}