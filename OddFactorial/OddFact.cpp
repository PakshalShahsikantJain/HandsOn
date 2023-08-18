/*
    Author : Pakshal Jain
    Date : 14/01/2023
    Program : To Calculate OddFactorial of Given Number
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class OddFact 
{
    //Characteristics of Class
    private :
        int No = 0;
    
    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        OddFact(int no)
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
        int i = 0;
        int Fact = 1;

        //Logic To Calculate  odd Factorial
        for(i = this->No;i > 0;i--)
        {
            if(i % 2 != 0)
            {
                Fact = Fact * i;
            }
        }

        return Fact;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function 
int main()
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter Number To Calculate OddFactorial of \n";
    cin>>No;

    //Creating object of Class
    OddFact obj(No);
    //Call To Behaviour of Class
    iret = obj.Calculate();

    //Printing OddFactoril Obtained
    cout<<"OddFactorial of Entered NUmber is : "<<iret;
 
    return 0;
}