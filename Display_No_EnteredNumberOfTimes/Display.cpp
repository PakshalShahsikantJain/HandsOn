/*
    Auhtor  : Pakshal Jain
    Date : 18/09/2022
    Program : To display first number in second number of times
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Print
{
    //Characteritics of Class
    private :
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public :
        //Parameterised Constructor
        Print(int no,int no2)
        {
            this->No = no;
            this->No2 = no2;
        }
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        if(this->No2 < 0)
        {
            this->No2 = -this->No2;
        }

        for(i = 0;i < this->No2;i++)
        {
            cout<<this->No<<"\t";
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh.....\n";
    cout<<"Enter Number TO Print\n";
    cin>>No;

    cout<<"Enter Number TO Iterate\n";
    cin>>No2;

    //Creating Object of Class
    Print pobj(No,No2);
    //Calling Behaviour of Class
    pobj.Display();

    return 0;
}
