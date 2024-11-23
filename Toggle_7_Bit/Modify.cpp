/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and toggle 7th bit of
              that number. Return modified number. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

typedef int UINT;

//Class Declaration
class Bit
{
    //Characteristics of Class
    private :
        UINT No = 0;

    //Constructor of Class
    public : 
        Bit()
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

    //Behaviour of Class To 
    UINT ToggleBit()
    {
        int iResult = 0;              //  0    0    0    0    0    0    4    0
        int iMask = 0X00000040;      //  0000 0000 0000 0000 0000 0000 0100 0000

        //Logic To Toggle Bit 
        iResult = iMask ^ this->No;

        return iResult;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int iRet = 0;

    cout<<"Jay Ganesh.....\n";

    //Creating object of Bit Class 
    Bit *bobj = new Bit();

    //Call To Behaviours of Class
    bobj->Accept();
    iRet = bobj->ToggleBit();

    //Printing Modified Number
    cout<<"Modified Number is : "<<iRet;

    return 0;
}