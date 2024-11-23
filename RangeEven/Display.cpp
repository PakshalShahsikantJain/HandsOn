/*
    Author : Pakshal Jain
    Date : 06/11/2022
    Program : To Print Even Number Between Entered Range
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Range
{
    //Characteristics of Class
    private :
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public :
        Range(int no,int no2)
        {
            this->No = no;
            this->No2 = no2;
        }
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        //Logic To Print Even Number
        cout<<"Printing Even Numbers in Entered Range : \n";
        for(i = this->No;i <= this->No2;i++)
        {
            if(i % 2 == 0)
            {
                cout<<i<<"\t";
            }
        }
    }
};//End Of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter Starting Number\n";
    cin>>No;

    cout<<"Enter Ending Number\n";
    cin>>No2;

    //Creating object of Range Class
    Range robj(No,No2);
    //Call To Behaviour of Class
    robj.Display();

    return 0;
}