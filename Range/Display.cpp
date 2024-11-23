/*
    Author : Pakshal Jain
    Date : 4/11/2022
    Program : To Accept Range From User and Display Numbers Between That range
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Range
{
    //characteristics of Class
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

        //Logic

        //Handeling If Entered starting Number is Greter Than Ending Number
        if(this->No > this->No2)
        {
            cout<<"Invalid Range";

            return;
        }
        
        cout<<"Printing Number Between Entered Range\n";
        
        for(i = this->No;i <= this->No2;i++)
        {
            cout<<i<<"\t";
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh....\n";
    
    //Taking Input from user
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