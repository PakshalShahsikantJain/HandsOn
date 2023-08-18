/*
    Author : Pakshal Jain
    Date : 17/12/2022
    Program : To Calculate Even Factorial of Entered Number
*/

//Required libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class EvenFactorial
{
    //Characteristics of Class
    private : 
        int No = 0;
        
    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        EvenFactorial(int no) 
        {
            //Handeling Condition if Entered Number is Negative
            if(no < 0)
            {
                no = -no;
            }

            this->No = no;
        }

    //Behaviour of Class
    int Fact()
    {
        int i = 0;
        int Fact = 1;

        //logic To Calculate Even Factorial of Number
        for(i = this->No;i > 0;i--)
        {
            if(i % 2 == 0)
            {
                Fact = Fact * i;
            }
        }

        return Fact;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter One Number To Calculate Even Factorial of...\n";
    cin>>No;

    //Creting object of EvenFactorial Class
    EvenFactorial eobj(No);

    //Call To Behaviour of Class
    iret = eobj.Fact();

    //Printing obtained Output
    cout<<"Even Factorial of Entered Number is : "<<iret;

    return 0;
}