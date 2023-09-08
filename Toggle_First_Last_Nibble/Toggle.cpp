/*
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and toggle contents 
              of first and last nibble of the number. Return modified number. (Nibble is a
              group of four bits) 

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Giving new Name To Data Type unsigned int i.e UINT 
typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Nibble
{
    //Characteristics of Class
    private :
        UINT iNo;
    
    //Constructor of Class
    public :
        //Default Constructor of Class
        Nibble()
        {
            this->iNo = 0;
        }
    
    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Taking Input from user
        cout<<"Enter One Number \n";
        cin>>this->iNo;
    }

    //Behaviour of Class To Toggle First and Last Nibbles of Entered Number 
    UINT Toggle()
    {
        int iMask = 0XF000000F;
        UINT iResult = 0;

        if(this->iNo < 0)
        {
            this->iNo = -this->iNo;
        }

        //Logic To Toggle 
        iResult = iMask ^ this->iNo;

        return iResult;
    }

    ~Nibble()
    {
        cout<<"Inside Destructor of Class \n";
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iret = 0;

    cout<<"Jay Ganesh...\n";

    //Creating object of Nibble Class
    Nibble *nobj = new Nibble();
    //Call To Behaviours of Class
    nobj->Accept();
    iret = nobj->Toggle();

    //Printing Modified Number
    cout<<"Modified Number is : "<<iret<<"\n";

    delete nobj;

    return 0;
}