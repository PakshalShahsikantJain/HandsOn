/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To Accept Number From User and Print Number Line of Entered Number
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Numberline
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Numberline(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        cout<<"Printing Number Line : \n";
        for(i = -this->No;i <= this->No;i++)
        {
            cout<<i<<"\t";
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
int main()
{
    int No = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter One Number\n";
    cin>>No;

    //Creating Object of Numberline Class
    Numberline nobj(No);
    //Call To Bheaviour of Class
    nobj.Display();

    return 0;
}