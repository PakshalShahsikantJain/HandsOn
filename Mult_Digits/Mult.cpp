/*
    Author : Pakshal Jain
    Date : 20/10/2022
    Program : To Calculate Multiplication of Digits of Entered Number
*/

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Multi
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Multi(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    int Calculate()
    {
        int Mult = 1;
        int Digit = 0;

        //Logic To Calculate Multiplication of Digits
        while(this->No != 0)
        {
            Digit = No % 10;
            if(Digit == 0)
            {
                Digit = 1;
            }
            Mult = Mult * Digit;
            No = No / 10;
        }

        return Mult;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function

int main() 
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";
    
    //Taking Input From User
    cout<<"Enter One Number\n";
    cin>>No;

    //Crating object of Multi Class
    Multi mobj(No);
    //Call To Behaviour of Class
    iret = mobj.Calculate();

    //Printing Multiplication of Digits
    cout<<"Multiplication of Digits of Entered Number is : "<<iret;

    return 0;
}