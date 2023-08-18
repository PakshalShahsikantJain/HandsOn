/*
    Author : Pakshal Jain
    Date : 20/10/2022
    Program : To accept number from user and if number is less than 50 then print small, 
              if it is greater than 50 and less than 100 then print medium, 
              if it is greater than 100 then print large
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Number 
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Number(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Output()
    {
        if(this->No < 50)
        {
            cout<<"Small\n";
        }
        else if((this->No >= 50)&&(this->No <= 100))
        {
            cout<<"Medium\n";
        }
        else if((this->No > 100))
        {
            cout<<"Large\n";
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;

    cout<<"Jay Ganesh..\n";

    cout<<"Enter One Number...\n";
    cin>>No;

    //Creating Object of Number Class
    Number nobj(No);
    
    //Call To Behaviour of Class
    nobj.Output();

    return 0;
}