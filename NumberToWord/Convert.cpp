/* 
    Author : Pakshal Jain
    Date : 22/10/2022
    Program : To Convert Single Digit Entered Number into Word
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Convert
{
    //Characteristic of Class
    private :
        int No = 0;
    //Constructor of CLass
    public :
        Convert(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display()
    {
        if(this->No < 0)
        {
            this->No = -this->No;
        }

        //Logic To Convert
        switch(this->No)
        {
            case 0 :
                cout<<"Zero";
                break;
            case 1 :
                cout<<"One";
                break;
            case 2 :
                cout<<"Two";
                break;
            case 3 :
                cout<<"Three";
                break;
            case 4 :
                cout<<"Four";
                break;
            case 5 :
                cout<<"Five";
                break;
            case 6 :
                cout<<"Six";
                break;
            case 7 :
                cout<<"Seven";
                break;
            case 8 :
                cout<<"Eight";
                break;
            case 9 :
                cout<<"Nine";
                break;
            default :
                cout<<"Invalid Number";
                break;
        }
    }
};

//Main Class
int main() 
{
    int No = 0;

    cout<<"Jay Ganesh...\n";
    
    //Taking input from user
    cout<<"Enter One Number...\n";
    cin>>No;

    //Creating object of Convert Class
    Convert cobj(No);

    //Call To Behaviour of Class
    cobj.Display();

    return 0;
}