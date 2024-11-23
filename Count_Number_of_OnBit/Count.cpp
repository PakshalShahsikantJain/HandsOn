/*
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and count number of
              ON (1) bits in it without using % and / operator.

              Input : 11
              Output : 3
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

    //Constructor of Classs
    public :
        //Default Constructor of Class 
        Bit()
        {
            this->iNo = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        cout<<"Enter One Number \n";
        cin>>this->iNo;
    }

    //Behaviour of Class To Count Number of Bits On
    int CountOnBit()
    {
        int icnt = 0;
        int i = 0;
        int iMask = 0X00000001;
        int iResult = 0;

        //Logic To Count Number of Bits ON
        for(i = 1;i <= 32;i++)
        {
            iMask = iMask << (i - 1);
            iResult = iMask & this->iNo;
            if(iResult == iMask)
            {
                icnt++;
            }
            iMask = 0X00000001;
            iResult = 0;
        }

        return icnt;
    }
};//End of Class 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;

    cout<<"Jay Shree Ganesh..\n";

    //Creating object of Bit Class
    Bit *bobj = new Bit();

    //Call To Behaviours of Class
    bobj->Accept();
    iret = bobj->CountOnBit();

    //Printing Count of Bits ON of Entered Number
    cout<<"Count of ON Bits of Entered number is : "<<iret<<"\n";

    //Deallocating Memory of object
    delete bobj;

    return 0;
}