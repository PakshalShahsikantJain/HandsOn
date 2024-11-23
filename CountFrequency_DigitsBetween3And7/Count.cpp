/*
    Author : Pakshal Jain
    Date : 19/10/2022
    Program : To Count Frequency Digits Which are Between 3 and 7 in Entered Number
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Frequency
{
    //Chracteristics of Class
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
            if((Digit > 3)&&(Digit < 7))
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
    
    cout<<"Enter One Number\n";
    cin>>No;

    //Creating object of Frequency Class
    Frequency fobj(No);

    //Call To Behaviour of Class
    iret = fobj.Count();
    cout<<"Frequency of Digits Which are Between 3 and 7 is : "<<iret;

    return 0;
}