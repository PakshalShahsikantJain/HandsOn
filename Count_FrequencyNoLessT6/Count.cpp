/*
    Author : Pakshal Jain
    Date : 18/10/2022
    Program : To Count Frequency of Digits less Than 6 in Entered Number
*/

//Required Librariess
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
        while(No != 0)
        {
            Digit = this->No % 10;
            if(Digit < 6)
            {
                icnt++;        
            }
            this->No = this->No / 10;
        }

        return icnt;
    }
};

int main()
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";
    
    cout<<"Enter Any Number you want\n";
    cin>>No;
    
    //Creating Object of Frequecy Class
    Frequency fobj(No);

    //Call To Count Function
    iret = fobj.Count();

    cout<<"Frequecny of Digits Less Than 6 is : "<<iret;

    return 0;
}