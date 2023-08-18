/*
    Author : Pakshal Jain
    Date : 19/10/2022
    Program : To Count Frequecy of Even Digits of Even Digits in Entered Number
*/

//Require Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Frequency
{
    //Characterstics of Class
    private :
        int No = 0;

    //Constructor of Class
    public :
        Frequency(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    int Count()
    {
        int Digit = 0;
        int icnt = 0;

        //Logic
        while(this->No != 0)
        {
            Digit = this->No % 10;
            if(Digit % 2 == 0)
            {
                icnt++;
            }
            this->No = this->No / 10;
        }

        return icnt;
    }
};

//Main Function
int main()
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter One Number\n";
    cin>>No;

    //Creating object of Frequecy Class
    Frequency fobj(No);

    //Call To Behaviour of Class
    iret = fobj.Count();

    //Printing Frequency of Even Digits
    cout<<"Frequecny of Even Digits is : "<<iret;

    return 0;
}