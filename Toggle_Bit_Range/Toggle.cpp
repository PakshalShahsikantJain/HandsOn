/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number from user and range of
              positions from user. Toggle all bits from that range.
              Input : 897 9 13
              Toggle all bits from position 9 to 13 of input number ie 879.

              UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
              {
                // Logic
              } 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Bit
{
    //Characteristics of Class
    private : 
        UINT iNo;
        int iStart;
        int iEnd;
    //Constructor of Class
    public :
        Bit()
        {
            this->iNo = 0;
            this->iStart = 0;
            this->iEnd = 0;
        }    

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        cout<<"Enter One Number \n";
        cin>>this->iNo;

        cout<<"Enter Starting Number \n";
        cin>>this->iStart;

        cout<<"Enter Ending Number\n";
        cin>>this->iEnd;
    }

    //Behaviour of Class To Toggle bit in Entered Range
    UINT ToggleBitRange()
    {
        int i = 0;
        int iMask = 0X00000001;
        UINT iResult = 0;

        iResult = this->iNo;
        for(i = iStart;i <= iEnd;i++)
        {
            iMask = iMask << (i - 1);
            iResult = iMask ^ iResult;
            iMask = 0X00000001;
        }

        return iResult;
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    UINT iret = 0;

    cout<<"Jay Ganesh....\n";

    //Creating object of Bit Class
    Bit *bobj = new Bit();

    //Call To Behaviours of Class
    bobj->Accept();
    iret = bobj->ToggleBitRange();
    
    //Printing Modified Number
    cout<<"Modified Number is : "<<iret;

    return 0;
}