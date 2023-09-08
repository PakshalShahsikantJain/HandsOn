/*
    Author : Pakshal Shashikant Jain 
    Date : 08/09/2023
    Program : Write a program which accept two numbers from user and display position
              of common ON bits from that two numbers.
              Input : 10 15 (1010 1111)
              Output : 2 4
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

//Giving New Name To Data Type unsigned int i.e UINT 
typedef unsigned int UINT;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Bit 
{
    //Characteristics of Class
    UINT iNo = 0;
    UINT iNo2 = 0;

    //Constructor of Classs
    public :
        //Default Constructor of Class 
        Bit()
        {
            this->iNo = 0;
            this->iNo2 = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        cout<<"Enter First Number \n";
        cin>>this->iNo;

        cout<<"Enter Second Number \n";
        cin>>this->iNo2;

    }

    //Behaviour of Class To Display Postion of Common ON Bits from Entered Two Numbers
    void CommonBit()
    {
        int ipos = 0;
        int iRem = 0;
        int iResult = 0;

        iResult = this->iNo & this->iNo2;

        cout<<"Common ON Bits From Entered Two Numbers are as Follows : "<<"\n";
        ipos = 1;
        while(iResult != 0) 
        {
            iRem = iResult % 2;
            if(iRem == 1) 
            {
                cout<<ipos<<"\t";
            }
            ipos++;
            iResult = iResult / 2;
        }
    }
};//End of Class 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{

    cout<<"Jay Shree Ganesh..\n";

    //Creating object of Bit Class
    Bit *bobj = new Bit();

    //Call To Behaviours of Class
    bobj->Accept();
    bobj->CommonBit();

    //Deallocating Memory of object
    delete bobj;

    return 0;
}