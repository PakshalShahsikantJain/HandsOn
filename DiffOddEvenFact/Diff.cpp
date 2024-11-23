/*
    Author : Pakshal Jain
    Date : 17/01/2023
    Program : To Calculate Difference Between Even and Odd Factorial of Entered Number
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Difference
{
    //Charactrstics of Class
    private : 
        int No = 0;

    //Constructor of Class
    public :
        //Parameterised Constructor 
        Difference(int no)
        {
            if(no < 0)
            {
                no = -no;
            }
            this->No = no;
        }

    //Behaviour of Class
    int Calculate()
    {
        int EvenFact = 1;
        int OddFact = 1;
        int Diff = 0;
        int i = 0;

        //Logic To Calculate Difference
        for(i = this->No; i > 0 ; i--)
        {
            if(i % 2 != 0)
            {
                OddFact = OddFact * i;
            }
            else 
            {
                EvenFact = EvenFact * i;
            }
        }

        //Calculate Difference
        Diff = EvenFact - OddFact;

        return Diff;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter Any Number You Want\n";
    cin>>No;

    //Creating object of Difference Class
    Difference dobj(No);

    //Call To Behaviour of Class
    iret = dobj.Calculate();

    //Printing obtained Output
    cout<<"Difference Between Even and Odd Factoriak of Entered Number is : "<<iret;

    return 0;
}