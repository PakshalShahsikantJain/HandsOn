/*
    Author : Pakshal Jain
    Date : 10/09/2022
    Program : To Display Marvellous Entered N Number of Times
*/

//Required Imports 
#include<iostream>
using namespace std;


//Class Declaration
class Display
{
    //Chracteristics of Class
    private : 
        int No = 0;
    
    //Constructor of Class
    public :
        Display(int no) 
        {
            this->No = no;
        }

    //Behaviour of Class
    void Print()
    {
        int i = 0;

        printf("Printing Marvellous %d Times \n",this->No);
        for(i = 0;i < this->No;i++)
        {
            cout<<"Marvellous\n";
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    cout<<"Jay Ganesh.....\n";
    int No = 0;

    cout<<"Enter One Number.....\n";
    cin>>No;

    Display dobj(No);
    dobj.Print();

    return 0;
}