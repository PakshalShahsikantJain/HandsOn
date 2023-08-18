/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To Accept Number From User and Display Odd Till That Number 
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class OddNumber
{
    //Characteristics of Class
    private :
        int No = 0;
    //Construcor of Class
    public :
        OddNumber(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        cout<<"Printing Odd Numbers Till Entered Number\n";
        for(i = 1;i <= this->No;i++)
        {
            if(i % 2 != 0)
            {
                cout<<i<<"\t";
            }
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    cout<<"Jay Ganesh...\n";
    
    cout<<"Enter One Number..\n";
    cin>>No;

    //Creating Object of OddNumber Class
    OddNumber nobj(No);
    //call To Behaviour of Class
    nobj.Display();

    return 0;
}