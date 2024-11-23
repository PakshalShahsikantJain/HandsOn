/*
    Author : Pakshal Jain
    Date : 24/11/2022
    Program : To Calculate Summation of Even Number in Entered Range
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Range
{
    //Characteristics of Class
    private :
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        Range(int no,int no2)
        {
            this->No = no;
            this->No2 = no2;
        }
    //Behaviour of Class
    int Summation()
    {
        int i = 0;
        int Sum = 0;

        //Logic To Calculate Summation
        for(i = this->No;i <= this->No2;i++)
        {
            if(i % 2 == 0)
            {
                Sum = Sum + i;
            }
        }

        return Sum;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";
    
    //Taking Input From User
    cout<<"Enter Starting Number..\n";
    cin>>No;

    cout<<"Enter Ending Number..\n";
    cin>>No2;

    //Handleing Condition if Entered Numbers are Negative
    if((No < 0)||(No2 < 0))
    {
        cout<<"Invalid Range";
        return -1;
    }
    //Handeling Condition if Starting Number is Greater Than Ending number
    else if(No > No2)
    {
        cout<<"Invalid Range";
        return -1;
    }

    //Cretaing object of Range Class
    Range robj(No,No2);
    //Call To Behaviour of Class
    iret = robj.Summation();

    //Printing Obtained Output
    cout<<"Summation of Even Numbers in Entered Range is : "<<iret;

    return 0;
}