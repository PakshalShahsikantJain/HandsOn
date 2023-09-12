/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number , two positions from user and
              check whether bit at first or bit at second position is ON or OFF.

              Input : 10 3 7
              Output : FALSE 
*/

//Required Libraries
#include<iostream>
using namespace std;

typedef unsigned int UINT;

//Class Declaration
class Bit
{
    //Characteristics of Class
    private :
        UINT iNo;
        int iPos1;
        int iPos2;
    
    //Constructor of Class
    public :
        Bit()    //Default Constructor 
        {
            this->iNo = 0;
            this->iPos1 = 0;
            this->iPos2 = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Taking input from user
        cout<<"Enter One Number \n";
        cin>>this->iNo;

        cout<<"Enter First Position \n";
        cin>>this->iPos1;

        cout<<"Enter Second Position \n";
        cin>>this->iPos2;
    }

    //Behaviour of class To Check Bit is On or OFF
    bool Check()
    {
        int iMask = 0X00000001;
        int iMask2 = 0X00000001;

        int iResult = 0;
        int iResult2 = 0;

        //Logic To Check
        iMask = iMask << (this->iPos1 - 1);
        iMask2 = iMask2 << (this->iPos2 - 1);
        
        iResult = iMask & this->iNo;
        iResult2 = iMask2 & this->iNo;

        if((iResult == iMask)||(iResult2 == iMask2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};//End of Class

//Main Function
int main()
{
    bool bret = false;

    printf("Jay Ganesh....\n");

    //Creating object of Class
    Bit *bobj = new Bit();
    //Call To Behaviour of Class
    bobj->Accept();
    bret = bobj->Check();

    //Printing Output According To Result
    if(bret == true)
    {
        cout<<"One or Both Bit is ON \n";
    }
    else
    {
        cout<<"Both Bits are OFF \n";
    }
    return 0;
}