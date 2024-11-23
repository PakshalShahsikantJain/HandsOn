/*
    Author : Pakshal Jain
    Date : 20/10/2022
    Program : To Calculate Difference Between Summation of Even And Odd Digits
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Difference 
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Difference(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    int calcu()
    {
        int Digits = 0;
        int Diff = 0;
        int Sum = 0;
        int Sum2 = 0;

        //Logic To Calucalte Difference
        while(this->No != 0)
        {
            Digits = this->No % 10;
            if(Digits % 2 == 0)
            {
                Sum = Sum + Digits;
            }
            else if(Digits % 2 != 0)
            {
                Sum2 = Sum2 + Digits;
            }
            this->No = this->No / 10;
        }

        Diff = Sum - Sum2;

        return Diff;
    }
};//End Of Class

//Main Function
int main()
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";
    
    cout<<"Enter One Number...\n";
    cin>>No;

    //Creating object of Difference Class
    Difference dobj(No);

    //Call To Behaviour of Class
    iret = dobj.calcu();

    //Printing Difference Calculated
    cout<<"Difference Between Summation of Even and odd Digits of Entered Number is : "<<iret;

    return 0;
}