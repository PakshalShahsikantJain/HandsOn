/*
    Author : Pakshal Jain
    Date : 17/09/2022
    Program : To Dispaly Entered Number of * on Screen using While Loop
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Pattern
{
    //Chracteristics of Class
    private :
        int No = 0;
    //Construtor of Class(Parameterised)
    public :
        Pattern(int no) 
        {
            this->No = no;
        }
    //Behavoiur of Class
    void Display()
    {
        while(this->No > 0)
        {
            cout<<"*\t";
            this->No--;
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;

    cout<<"Jay Ganesh....\n";
    cout<<"Enter One Number....\n";
    cin>>No;

    Pattern pobj(No);
    pobj.Display();

    return 0;
}