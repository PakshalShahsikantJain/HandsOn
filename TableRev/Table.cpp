/*
    Author : Pakshal Jain
    Date : 25/10/2022
    Program : To Display Table of Entered Number in Reverse Order
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Table 
{
    //Characteristics of Class
    private :
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public :
        Table(int no,int no2)
        {
            this->No = no;
            this->No2 = no2;
        }
    //Behaviour of Class
    void Display()
    {
        cout<<"Printing Table in Reverse order\n";
        int i = 0;
        int table = 0;

        //Logic
        for(i = this->No2;i > 0;i--)
        {
            table = this->No * i;
            cout<<table<<"\t";
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh....\n";

    cout<<"Enter Number To Display Table of..\n";
    cin>>No;

    cout<<"Enter Number Till You Want To Display Table of Entered Number i.e eg 2 * ?... \n";
    cin>>No2;

    //Creating object of Class
    Table tobj(No,No2);
    //Call To Behaviour of Class
    tobj.Display();

    return 0;
}