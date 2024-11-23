/*
    Author : Pakshal Jain
    Date : 24/10/2022
    Program : To Display Table of Entered Number
*/

//Required Libraies
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        int i = 0;
        int Table = 0;

        //Displaying Value of table
        cout<<"Printing Table of Entered Number..\n";
        for(i = 1;i <= this->No2;i++)
        {
            Table = this->No * i;
            cout<<Table<<"\t";
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh...\n";
    
    //Taking Input From user
    cout<<"Enter One Number To Display Table of...\n";
    cin>>No;

    cout<<"Enter Number Till You Want Value of Table i.e eg 2 * ? \n";
    cin>>No2;

    //Creating object of Table
    Table tobj(No,No2);
    tobj.Display();

    return 0;
}